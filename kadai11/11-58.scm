(define (fix f)
  (lambda (x) ((f (fix f)) x)))

(define fact
  (lambda (f)
    (lambda (n)
      (if (zero? n)
        1
        (* n (f (- n 1)))))))

(define (fact5 n)
  ((fix fact) n))
