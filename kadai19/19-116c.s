	# ABIバージョンを明示
	.abiversion 2
	# エントリポイントのデフォルトは _start なのでこれを公開する
	.globl _start
	.align 2
_start:
	li %r0, 1 # (__NR_exit == 1)
	li %r3, 0
	sc
