        .globl rotate90
rotate90:
        # next p[1]=p[0]なのでp[0]を保存
        lwa %r4, 0(%r3)
        # next p[0]=-p[1]なので-p[1]を計算
        lwa %r5, 4(%r3)
        neg %r5, %r5
        #結果をポインタの先に保存
        stw %r5, 0(%r3)
        stw %r4, 4(%r3)
        blr
