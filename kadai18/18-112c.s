	.globl qq
	.section ".data"
	#printfの第一引数
.Lfmt:
	.string "%dx%d=%d\n"
	#printfの第二、第三引数
	.section ".text"
	.align 2
qq:
	#スタックフレームの退避
	mflr %r0
	std %r0, 16(%r1)
	stdu %r1, -128(%r1)
	li %r4, 1
	stw %r4, 112(%r1)
	stw %r4, 120(%r1)
loop:	
	#第一引数のセット
	addis %r3, %r2, .Lfmt@toc@ha
	addi %r3, %r3, .Lfmt@toc@l
	#第二、第三引数のセット
	lwa %r4, 120(%r1)
	lwa %r5, 112(%r1)
	#第三引数のインクリメント
	addi %r6, %r5, 1
	stw %r6, 112(%r1)
	#第四引数のセット
	mullw %r6, %r4, %r5
	bl printf
	nop
	lwa %r5, 112(%r1)
	#第三引数が10になっていたらchangeへ
	cmpwi %r5, 10
	beq change
	b loop
	#第二引数をインクリメントし、第三引数を１に戻す
change:
	lwa %r4, 120(%r1)
	cmpwi %r4, 9
	beq end
	li %r5, 1
	stw %r5, 112(%r1)
	addi %r4, %r4, 1
	stw %r4, 120(%r1)
	b loop
	#スタックフレームの復帰
end:	
        addi %r1, %r1, 128
	ld %r0, 16(%r1)
	mtlr %r0
	blr
