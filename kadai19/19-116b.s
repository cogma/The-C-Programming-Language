	# ABIバージョンを明示
	.abiversion 2
	# エントリポイントのデフォルトは _start なのでこれを公開する
	.globl _start
	.align 2
_start:
	# write(1, msg1, 11) (__NR_write == 4)
	li %r0, 4
	li %r3, 1
	lis %r4, msg1@ha
	addi %r4, %r4, msg1@l
	li %r5, 11
	sc
	# read(0, name, 1024) (__NR_read == 3)
	li %r0, 3
	li %r3, 0
	lis %r4, name@ha
	addi %r4, %r4, name@l
	li %r5, 1024
	sc
	# write(1, msg2, 7) (__NR_write == 4)
	li %r0, 4
	li %r3, 1
	lis %r4, msg2@ha
	addi %r4, %r4, msg2@l
	li %r5, 7
	sc
	# name の末尾の改行を終端文字に変える
	lis %r4, name@ha
	addi %r4, %r4, name@l
loop:
	lbz %r3, 0(%r4)
	addi %r4, %r4, 1
	cmpdi %r3, 10 # 改行文字のコード
	bne loop
	li %r3, 0
	# 終端文字のコード
	subi %r4, %r4, 1
	stb %r3, 0(%r4)
	# write(1, name, 1024) (__NR_write == 4)
	li %r0, 4
	li %r3, 1
	lis %r4, name@ha
	addi %r4, %r4, name@l
	li %r5, 1024
	sc
	# write(1, msg3, 2) (__NR_write == 4)
	li %r0, 4
	li %r3, 1
	lis %r4, msg3@ha
	addi %r4, %r4, msg3@l
	li %r5, 2
	sc
	# _exit(0) (__NR_exit == 1)
	li %r0, 1
	li %r3, 0
	sc
	.section ".rodata"
	.align 2
msg1:
	.string "Your name: "
msg2:
	.string "Hello, "
msg3:
	.string "!\n"
	.section ".data"
name:
	.space 1024
