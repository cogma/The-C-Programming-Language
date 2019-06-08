(define (stack-push st val)
  (cons val st)
  )

(define (stack-read st)
  (car st)
  )

(define (stack-pop st)
  (cdr st)
  )

(define (calc-add st)
  (stack-push
   (stack-pop (stack-pop st))
   (+ (stack-read (stack-pop st)) (stack-read st))))

(define (calc-sub st)
  (stack-push
   (stack-pop (stack-pop st))
   (- (stack-read (stack-pop st)) (stack-read st))))

(define (calc-mul st)
  (stack-push
   (stack-pop (stack-pop st))
   (* (stack-read (stack-pop st)) (stack-read st))))

(let ((st (list)))
  (define (main-loop st)
    (let ((cmd (read)))
      (cond
       ((or (equal? cmd '=) (eof-object? cmd))
        (write (stack-read st)) (newline))
       ((equal? cmd '+)
        (main-loop (calc-add st)))
       ((equal? cmd '-)
        (main-loop (calc-sub st)))
       ((equal? cmd '*)
        (main-loop (calc-mul st)))
       ((number? cmd)
        (main-loop (stack-push st cmd)))
       (else
        (display "(unknown command)\n")
        (main-loop st)))))
  (main-loop st))