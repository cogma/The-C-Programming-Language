(define (even<odd? a b c d e)
  (> (+ (if(odd? a)1 0)(if(odd? b)1 0)(if(odd? c)1 0)(if(odd? d)1 0)(if(odd? e)1 0))2))
