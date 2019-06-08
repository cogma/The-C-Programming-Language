(define (fib2 a)
  (if (= a 0)
      0
      (if (= a 1)
          1
          (fib a 1 0))))

(define (fib a b c)
  (if (= a 1)
      b
      (fib (- a 1) (+ b c) b)))