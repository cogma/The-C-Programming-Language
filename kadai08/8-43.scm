(define (compose f g)
  (lambda(x)(g (f x))))