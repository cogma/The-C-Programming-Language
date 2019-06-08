(define(my-assoc a b)
  (if (null? b)
      #f
      (if(equal? a (car(car b)))
         (car b)
         (my-assoc a (cdr b)))))