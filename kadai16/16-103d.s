        # maxof2をシンボルテーブルに追加し、16-103d.cから見られるようにする
	    .global maxof2
# 関数maxof2の開始位置
maxof2:
        #x<=y なら、 ans_yに分岐
        cmpw %r3, %r4
		ble ans_y
		# x > y なので、xが答え
		blr
# ここに飛ぶとyを返す (yをxにコピーして呼び出し元に復帰する)
ans_y:
        mr %r3,%r4
	blr
