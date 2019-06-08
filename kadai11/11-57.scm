(define (if-fun exp1 exp2 exp3)
  (if exp1 exp2 exp3))

(define (f x)
  x)
  
(define (fact4_s n)
  (if-fun (= n 1) f (lambda (x) ( (fact4_s (- n 1)) (* n x)) )))

(define (fact4 n)
	((fact4_s n) 1))
