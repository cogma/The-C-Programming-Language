(define (first l n)
  (if (< n 1)
      '()
      (if (<= (length l) n)
          l
          (cons(car l)(first (cdr l) (- n 1))))))

(define (latter l n)
  (if (< n 1)
      '()
      (if (<= (length l) n)
	  l
	  (latter (cdr l) n))))

(define (merge l1 l2)
  (if (< (length l1) 1)
          l2
          (if (< (length l2) 1)
	      l1
	      (if (string<? (car l1) (car l2))
	          (cons (car l1) (merge (cdr l1) l2))
	          (cons (car l2) (merge l1 (cdr l2)))))))

(define (my-sort l)
  (if (< (length l) 2)
      l
      (merge(my-sort(first l (/ (length l) 2)))
	    (my-sort(latter l (+ (/ 1 2) (- (length l) (/ (length l) 2))))))))