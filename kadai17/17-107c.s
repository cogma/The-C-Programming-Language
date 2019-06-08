	# .data セクション
	.section ".data"
	# intなので4バイトアラインする
	.align 2
fresh_table:
	.long 0
	# .text セクション
	.section ".text"
	# 命令なので4バイトアラインする
	.align 2
	.globl fresh
fresh:
	# fresh_table のアドレスを計算
	addis %r4, %r2, fresh_table@toc@ha
	addi %r4, %r4, fresh_table@toc@l
       #%r3にtableの内容を格納
	li %r3, 0
	sldi %r3, %r3, 2
	lwax %r3, %r4, %r3
       #tableの内容をインクリメント
	addi %r5, %r3, 1
	stw %r5, 0(%r4)
	blr
