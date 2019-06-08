	.globl decrement
decrement:
	lwa %r4, 0(%r3)
	addi %r4, %r4, -1
	stw %r4, 0(%r3)
	blr
