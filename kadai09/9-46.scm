(define (plus-naive a b)
  (if (<= a 0)
      b
      (+ (plus-naive (- a 1) b) 1)))
 
(define (plus-tail-rec a b)
  (if (<= a 0)
      b
      (plus-tail-rec (- a 1) (+ b 1))))

(plus-naive 100000 1)
(plus-tail-rec 100000000 1)