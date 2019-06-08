	.globl print_cwd
	.section ".text"
	.align 2
print_cwd:
	# 関数プロローグ: スタックサイズ48
	mflr %r0
	std %r0, 16(%r1)
	stdu %r1, -48(%r1)

	# システムコール番号 __NR_getcwd == 182
	li %r0, 182
	# 第1引数
	addis %r3, %r2, buf@toc@ha
	addi %r3, %r3, buf@toc@l
	# 第二引数
	li %r4, 1024
	# システムコールを実行 (成功すれば%r3にカレントディレクトリのパスのポインタが入る)
	sc
	# システムコール番号 __NR_write == 4
	li %r0, 4
	# 第1引数
	li %r3, 1
	# 第2引数
	addis %r4, %r2, buf@toc@ha
	addi %r4, %r4, buf@toc@l
	# 第3引数
	li %r5, 1024
	# システムコールを実行
	sc

	# 関数エピローグ
	addi %r1, %r1, 48
	ld %r0, 16(%r1)
	mtlr %r0
	blr
	.section ".data"
	.align 2
buf:
	.space 1024
