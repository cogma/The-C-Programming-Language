       	.globl maxof3
	.section ".text"
	.align 2
maxof3:
	# 関数プロローグ
	mflr %r0
	std %r0, 16(%r1)
	stw %r5, -8(%r1)
	stdu %r1, -128(%r1)
	# maxof2の呼び出し
	bl maxof2
	nop
	# 二回目の第二引数をセット
	lwa %r4, 120(%r1)
	bl maxof2
	nop
	# 関数エピローグ
	la %r1, 128(%r1)
	ld %r0, 16(%r1)
	mtlr %r0
	blr
