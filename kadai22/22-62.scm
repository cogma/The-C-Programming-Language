(define (empty-frame)
  (list))

(define (update frame var val)
  (cons (cons var val) frame))

(define (lookup var frame)
  (assoc var frame))

(define (make-env)
  (list (empty-frame)))

(define (extend-env env)
  (cons (empty-frame) env))

(define (define-var! env var val)
  (if (null? env)
      #f
      (set-car! env (update (car env) var val)))
  env)

(define (constant? exp)
  (or (boolean? exp) (number? exp) (string? exp)))

(define (correct-syntax? type exp) #t)

(define (def-eval env exp)
  (if (correct-syntax? 'define exp)
      (let* ((var (cadr exp))
             (res (base-eval env (caddr exp)))
             (env (car res))
             (val (cdr res)))
        (cons (define-var! env var val) var))
      (eval-error env 'syntax-error exp)))

(define (lookup-var var env)
  (if (null? env)
      #f
      (let ((found (lookup var (car env))))
        (if (pair? found)
            found
            (lookup-var var (cdr env))))))

(define (var-eval env exp)
  (let ((data (lookup-var exp env)))
    (if (pair? data)
        (cons env (cdr data))
        (eval-error env 'unbound-variable exp))))

(define (map-base-eval env el)
  (cons env
        (map (lambda (exp) (cdr (base-eval env exp))) el)))

(define primitive-arity cadr)

(define primitive-fun caddr)

(define closure-env cadr)

(define closure-params caddr)

(define closure-body cdddr)

(define (base-apply env fun args)
  (cond ((data-closure? fun)
         (base-eval (define-var! (extend-env (closure-env fun)) (car (closure-params fun)) (car args)) (car (closure-body fun))))
        ((data-primitive? fun)
         (if (or (not (number? (primitive-arity fun)))
                 (= (primitive-arity fun) (length args)))
             ((primitive-fun fun) env args)
             (eval-error env 'wrong-number-of-args fun)))
        (else
         (eval-error env 'non-function fun))))

(define (app-eval env exp)
  (if (correct-syntax? 'app exp)
      (let* ((l (map-base-eval env exp))
             (env (car l))
             (fun (cadr l))
             (args (cddr l)))
        (base-apply env fun args))
      (eval-error env 'syntax-error exp)))

(define (make-closure env params body)
  (cons '*lambda* (cons env (cons params body))))

(define (lambda-eval env exp)
  (if (correct-syntax? 'lambda exp)
      (cons env (make-closure env (cadr exp) (cddr exp)))
      (eval-error env 'syntax-error exp)))

(define (eval-error env type exp)
  (display "ERROR: ")
  (write type)
  (display ": ")
  (print-data exp)
  (newline)
  (cons env '*error*))

(define (if-predicate exp) (cadr exp))

(define (if-consequent exp) (caddr exp))

(define (if-alternative exp)
  (if (not (null? (cdddr exp)))
      (cadddr exp)
      'false ))

(define (true? x) (eq? x #t))

(define (if-eval env exp)
  (if (cdr (base-eval env (if-predicate exp)))
      (base-eval env (if-consequent exp))
      (base-eval env (if-alternative exp))))

(define (let-eval env exp)
  (if (correct-syntax? 'let exp)
      (base-eval env (let->app exp))
      (eval-error env 'syntax-error exp)))

(define (let->app exp)
  (let ((decl (cadr exp))
        (body (cddr exp)))
    (cons (cons 'lambda (cons (map car decl) body))
          (map cadr decl))))

(define (quote-eval env exp) (cons env (cadr exp)))

(define (base-eval env exp)
  (cond ((eof-object? exp) (cons env '*exit*))
        ((constant? exp) (cons env exp))
        ((symbol? exp) (var-eval env exp))
        ((not (pair? exp)) (eval-error env 'unknown-data exp))
        ((equal? (car exp) 'exit) (cons env '*exit*))
        ((equal? (car exp) 'define) (def-eval env exp))
        ((equal? (car exp) 'let) (let-eval env exp))
        ((equal? (car exp) 'letrec) (letrec-eval env exp))
        ((equal? (car exp) 'lambda) (lambda-eval env exp))
        ((equal? (car exp) 'if) (if-eval env exp))
        ((equal? (car exp) 'begin) (begin-eval env exp))
        ((equal? (car exp) 'quote) (quote-eval env exp))
        (else (app-eval env exp))))

(define (make-primitive arity fun)
  (list '*primitive* arity fun))

(define (make-top-env)
  (let* ((env (make-env))
         (env
          (define-var! env '=
            (make-primitive 2 (lambda (env args)
                                (cons env (= (car args) (cadr args)))))))

         (env
          (define-var! env '!
            (make-primitive 1 (lambda (env args)
                                (cons env (!(car args)))))))

         (env
          (define-var! env '+
            (make-primitive 2 (lambda (env args)
                                (cons env (+ (car args) (cadr args)))))))

         (env
          (define-var! env '-
            (make-primitive 2 (lambda (env args)
                                (cons env (- (car args) (cadr args)))))))
         
         (env
          (define-var! env '*
            (make-primitive 2 (lambda (env args)
                                (cons env (* (car args) (cadr args)))))))

         (env
          (define-var! env '/
            (make-primitive 2 (lambda (env args)
                                (cons env (/ (car args) (cadr args)))))))

         (env
          (define-var! env '<
            (make-primitive 2 (lambda (env args)
                                (cons env (< (car args) (cadr args)))))))

         (env
           (define-var! env '>
            (make-primitive 2 (lambda (env args)
                                (cons env (> (car args) (cadr args)))))))
         
         (env
          (define-var! env 'list
            (make-primitive #f (lambda (env args) (cons env args)))))

         (env
          (define-var! env 'cons
            (make-primitive 2 (lambda (env args)
                                (cons env (cons (car args) (cadr args)))))))

         (env
          (define-var! env 'car
            (make-primitive 1 (lambda (env args)
                                (cons env (car(car args)))))))

         (env
          (define-var! env 'cdr
            (make-primitive 1 (lambda (env args)
                                (cons env (cdr (car args)))))))

         (env
          (define-var! env 'not
            (make-primitive 1 (lambda (env args)
                                (cons env (not (car args)))))))

         (env
          (define-var! env 'assoc
            (make-primitive 2 (lambda (env args)
                                (cons env (assoc (car args) (cdr args)))))))

         (env
          (define-var! env 'set-car!
            (make-primitive 2 (lambda (env args)
                                (cons env (set-car! (car args) (cdr args)))))))
            
         (env
          (define-var! env 'null?
            (make-primitive 1 (lambda (env args)
                                (cons env (null? (car args)))))))

         (env
          (define-var! env 'boolean?
            (make-primitive 1 (lambda (env args)
                                (cons env (boolean? (car args)))))))

         (env
          (define-var! env 'number?
            (make-primitive 1 (lambda (env args)
                                (cons env (number? (car args)))))))

         (env
          (define-var! env 'string?
            (make-primitive 1 (lambda (env args)
                                (cons env (string? (car args)))))))

         (env
          (define-var! env 'pair?
            (make-primitive 1 (lambda (env args)
                                (cons env (pair? (car args)))))))
         
         (env
          (define-var! env 'equal?
            (make-primitive 2 (lambda (env args)
                                (cons env (equal? (car args) (cadr args)))))))
         (env
          (define-var! env 'display
            (make-primitive
             1
             (lambda (env args)
               (display (car args))
               (cons env '*unspecified*)))))
         (env
          (define-var! env 'load
            (make-primitive
             1
             (lambda (env args)
               (with-input-from-file (car args)
                 (lambda ()
                   (define (re-loop env)
                     (let* ((res (base-eval env (read)))
                            (env (car res))
                            (val (cdr res)))
                       (if (equal? val '*exit*)
                           (cons env '*unspecified*)
                           (re-loop env))))
                   (re-loop env))))))))
    env))

(define (data-closure? data)
  (and (pair? data) (equal? (car data) '*lambda*)))

(define (data-primitive? data)
  (and (pair? data) (equal? (car data) '*primitive*)))

(define (print-data data)
  (cond ((data-closure? data) (display "#<closure>"))
        ((data-primitive? data) (display "#<primitive>"))
        ((equal? data '*unspecified*) (display "#<unspecified>"))
        ((equal? data '*error*) (display "#<error>"))
        ((equal? data '*exit*))
        (else (write data))))