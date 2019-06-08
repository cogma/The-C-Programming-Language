	.globl ntimes
	# int ntimes(int n, int (*f)(int), int x);
ntimes:
	# 非揮発性レジスタの退避
	std %r31, -8(%r1)
	std %r30, -16(%r1)
	std %r29, -24(%r1)
	# n, f, x は非揮発性レジスタで管理する
	mr %r29, %r3
	mr %r30, %r4
	mr %r31, %r5
	# lrの退避とスタックフレームの確保
	mflr %r0
	std %r0, 16(%r1)
	stdu %r1, -64(%r1)
	# --n; をしながら繰り返す
.Lloop:
	cmpdi %r29, 0
	ble .Lloop_end
	# x を %r3 に
	mr %r3, %r31
	# f を %ctr に入れてジャンプ
	mtctr %r30
	bctrl
	# 戻り値を回収して x に
	mr %r31, %r3
	addi %r29, %r29, -1
	b .Lloop
.Lloop_end:
        mr %r3, %r31
	# スタックを巻き戻して %lr を復帰
	addi %r1, %r1, 64
	ld %r0, 16(%r1)
	mtlr %r0
	# 非揮発性レジスタを復帰
	ld %r29, -24(%r1)
	ld %r30, -16(%r1)
	ld %r31, -8(%r1)
	blr
