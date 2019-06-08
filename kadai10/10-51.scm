(define (my-reverse a)
  (my-reverse_s a '()))

(define (my-reverse_s a b)
    (if (null? a)
        b
        (my-reverse_s (cdr a) (cons (car a) b))))

(my-reverse '(1 2 3 4 5))