(define (ack m n)
  (ack2(ack_s (list n m 0))))

(define (ack_s x)
  (if (null? (cdr (cdr x)))
      (car x)
      (if (= (car (cdr x)) 0)
            (cons (+ (car x) 1) (cdr (cdr x)))
            (if (= (car x) 0)
                (cons  1 (cons(- (car (cdr x)) 1) (cdr (cdr x))))
                (cons (- (car x) 1) (cons(car (cdr x)) (cons (- (car (cdr x)) 1) (cdr (cdr x)))))))))

(define (ack2 x)
  (if (null? (cdr (cdr x)))
      (car x)
      (ack2 (ack_s x))))