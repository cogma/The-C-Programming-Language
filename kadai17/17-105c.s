	.globl fib
fib:
	# n==0,1なら抜ける
	cmpwi %r3, 0
	beqlr
	cmpwi %r3, 1
	beqlr
        # %r4をfib(i)として%r5をfib(i+1)として扱う
        li %r4, 1
        li %r5, 2
loop:
        # %r3が2ならループから抜ける
        cmpwi %r3, 2
        beq ans
        # %r4が1でないならば、fib(i),fib(i+1)を更新
        mr %r6, %r5
        add %r5, %r4, %r5
	mr %r4, %r6
loop_cont:
	# %r3が2でないならば、%r3を1減らして再試行
	subi %r3, %r3, 1
	b loop
ans:
	mr %r3, %r4
	blr

