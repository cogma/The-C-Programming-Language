(define (min-of-four a b c d)
  (cond
    ((and(<= a b) (<= a c)(<= a d))a)
    ((and(<= b c)(<= b d)b))
    ((if(<= c d)c d))))