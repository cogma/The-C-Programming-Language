(define (my-foldl op acc l)
  (if (null? l)
      acc
      (my-foldl op (op (car l) acc) (cdr l))))

(define (op a b)
  (if (pair? b)
      b
      (if (equal? (car a) b)
         a
         b)))

(define (my-assoc2 a b)
  (if (pair? (my-foldl op a b))
      (my-foldl op a b)
      #f))