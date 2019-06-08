	.abiversion 2
	.section ".text"
	.align 2
	.globl _start
_start:
	# int fd = open("/etc/bash.bashrc", O_RDONLY)
	# システムコール番号
	li %r0, 5 #__NR_open
	# 第1引数 "/etc/bash.bashrc"
	lis %r3, bashrc@ha
	addi %r3, %r3, bashrc@l
	# 第2引数 O_RDONLY == 0
	li %r4, 0
	# 第3引数 今回は使われないので適当に0とおいておく
	li %r5, 0
	# システムコールを実行
	sc

	# fd を %r31 に保存
	mr %r31, %r3

	# システムコール番号
	li %r0, 90 #__NR_mmap
	mr %r7, %r3
	# NULL (位置ヒントなし)
	li %r3, 0
	# 65536 (合計65536バイト以上の連続したページを確保)
	lis %r4, 1
	# 読み取りが可能
	li %r5, 1 #PROT_READ
	li %r6, 1 #MAP_SHARED
	li %r8, 0
	sc

	# システムコール番号
	li %r0, 4 #__NR_write
	mr %r4, %r3
	# 標準出力は1
	li %r3, 1
	lis %r5, 1
	sc

	# close(fd);
	# システムコール番号
	li %r0, 6 #__NR_close
	# 第1引数 fd
	mr %r3, %r31
	# システムコールを実行
	sc

	# exit(0);
	li %r0, 1 #__NR_exit
	li %r3, 0
	sc
	.section ".rodata"
	.align 2
bashrc:
	.string "/etc/bash.bashrc"
