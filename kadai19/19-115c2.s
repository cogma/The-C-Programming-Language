	.globl decrement
decrement:
	# 予約しつつ読み込む。
	lwarx %r4, 0, %r3
	addi %r4, %r4, -1
	# この間に干渉がなかったら書き込む。
	stwcx. %r4, 0, %r3
	# 失敗したら再試行する
	bne- decrement
	blr
