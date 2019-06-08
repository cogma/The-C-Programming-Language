(define (rational a b)
  (if (= b 0)
      #f
      (if (> b 0)
	  (cons a b)
	  (cons (- 0 a) (- 0 b)))))

(define (rat-num r)
  (/ (car r) (gcd(car r) (cdr r))))

(define (rat-denom r)
  (/ (cdr r) (gcd(car r) (cdr r))))

(define (rat-= r1 r2)
  (and (equal? (rat-num r1) (rat-num r2)) (equal? (rat-denom r1) (rat-denom r2))))

(define rat-0 (rational 0 1))

(define (rat-+ r1 r2)
  (rational
   (+ (* (rat-num r1) (/ (lcm (rat-denom r1) (rat-denom r2)) (rat-denom r1)))
      (* (rat-num r2) (/ (lcm (rat-denom r1) (rat-denom r2)) (rat-denom r2))))
   (lcm (rat-denom r1) (rat-denom r2))))

(define (rat-- r)
  (rational (- 0 (rat-num r))(rat-denom r)))

(define rat-1 (rational 1 1))

(define (rat-* r1 r2)
  (rational (* (rat-num r1) (rat-num r2)) (* (rat-denom r1) (rat-denom r2))))

(define (rat-/ r)
  (rational (rat-denom r) (rat-num r)))

