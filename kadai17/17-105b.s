	.globl prime_factor
prime_factor:
        #nが3以下ならprime_factor(n)=n
        cmpwi %r3, 3
        blelr
        #2から順に試し割りしていく
        li %r4, 2
        # %r4がnの半分を超えたらnを素数と判定
        divw %r5, %r3, %r4
        addi %r5, %r5, 1
loop:
        # %r4がnの半分を超えているかチェック
	cmpw %r5, %r4
	beqlr
        #nが%r4で割れるならばreturn
        divw %r6, %r3, %r4
        mullw %r6, %r6, %r4
        cmpw %r3, %r6
        beq return
        # nが%r4で割れないならば%r4をインクリメントしてもう一度
	addi %r4, %r4, 1
        b loop
return:
        # %r4を答えとする
	mr %r3, %r4
	blr
	
