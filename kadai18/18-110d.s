        .section ".rodata"
        # プログラムで使う値を置いておく
        .align 3
numbers:
        .double 0.0
        .double 0.25
        .double 0.5
        .double 0.75
        .double 1.0
        .double 3.0
        .double 4.0
        .section ".text"
	.globl cantor
        .align 2
cantor:
	# スタックフレームを作る
	mflr %r0
	std %r0, 16(%r1)
	stdu %r1, -32(%r1)
        # データをレジスタに代入
        addis %r3, %r2, numbers@toc@ha
	addi %r3, %r3, numbers@toc@l
        lfd %f2, 0(%r3)
        lfd %f3, 8(%r3)
        lfd %f4, 16(%r3)
        lfd %f5, 24(%r3)
        lfd %f6, 32(%r3)
        lfd %f7, 40(%r3)
        lfd %f8, 48(%r3)
        # 場合分け
        fcmpu %r0, %f1, %f2
	bun end
        ble zero
        fcmpu %r0, %f1, %f6
        bge one
        fcmpu %r0, %f1, %f3
        blt endpre
        fcmpu %r0, %f1, %f5
        ble half
        fmul %f1, %f1, %f8
        fsub %f1, %f1, %f7
        bl cantor
        fmul %f1, %f1, %f4
        fadd %f1, %f1, %f4
        b end
zero:
        fmr %f1, %f2
        b end
half:
        fmr %f1, %f4
        b end
one:
        fmr %f1, %f6
        b end
endpre:
        fmul %f1, %f1, %f8
        bl cantor
        nop
        fmul %f1, %f1, %f4
end:
        # 避難してたものを復帰させる
        addi %r1, %r1, 32
	ld %r0, 16(%r1)
	mtlr %r0
	blr
