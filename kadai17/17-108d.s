	.section ".rodata"
	.align 3
	# 定数 0.0,1.0
fzero_one:
	.double 0.0
	.double 1.0
	.section ".text"
	.globl ffib
	.align 2
ffib:
	# 定数 0.0 を %f2 に、定数 1.0 を %f3 にロード
	addis %r4, %r2, fzero_one@toc@ha
	addi %r4, %r4, fzero_one@toc@l
	lfd %f2, 0(%r4)
	lfd %f3, 8(%r4)
        # %r3 が 0 なら x_zero へ、 %r3 が 1 なら x_one へ
	cmpwi %r3, 0
	beq x_zero
	cmpwi %r3, 1
	beq x_one

loop:
        # %f2 を ffib(n) 、 %f3 を ffib(n+1) として扱う。
        fmr %f4, %f3
        fadd %f3, %f3, %f2
        fmr %f2, %f4
        # %r3 が 1 なら x_zero へ、そうでないなら %r3 をデクリメントしてもう一度
        cmpwi %r3, 1
        beq x_zero
        subi %r3, %r3, 1
        b loop
x_zero:
	fmr %f1, %f2
	blr
x_one:
	fmr %f1, %f3
	blr
