(define (fib a)
  (if(= a 1) 1 (if (= a 0) 0 (+ (fib (- a 1))(fib (- a 2))))))