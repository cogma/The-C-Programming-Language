(define (fact2 a)
  (fact (- a 1) a))

(define (fact a b)
  (if (= a 0) b (fact (- a 1) (* a b))))