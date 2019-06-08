(define (my-gcd a b)
  (if (= a b)a
      (if(> a b)(my-gcd (- a b) b) (my-gcd a (- b a)))))