        .globl mystrlen
mystrlen:
	# 初期値
        li %r4, 0
loop:
	# 一文字読み込んでそれが終わりでなかったら%r4をインクリメントしてループ
        lbz %r5, 0(%r3)
	cmpdi %r5, 0
	beq return
	addi %r3, %r3, 1
        addi %r4, %r4, 1
	b loop
return:
	# %r4を返す
	mr %r3, %r4
	blr
	
