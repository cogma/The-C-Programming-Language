    .globl f
f:
    cmpdi %r3, 0
    beqlr
    li %r7, 0
    mtctr %r3
    mr %r5, %r4
init_loop:
    std %r7, 0(%r5)
    addi %r5, %r5, 8
    bdnz init_loop
init_loop_end:
    li %r6, 1
outer_loop:
    addi %r7, %r6, 1
    mullw %r10, %r6, %r7
    cmpd %r10, %r3
    bge- outer_loop_end
    addi %r8, %r3, -1
    divdu %r8, %r8, %r6
    subf %r8, %r6, %r8
    mtctr %r8
    mulli %r9, %r6, 8
    mullw %r10, %r9, %r6
    add %r5, %r4, %r10
    ld %r8, 0(%r5)
    add %r8, %r8, %r6
    std %r8, 0(%r5)
    add %r5, %r5, %r9
    add %r7, %r7, %r6
inner_loop:
    ld %r8, 0(%r5)
    add %r8, %r8, %r7
    std %r8, 0(%r5)
    add %r5, %r5, %r9
    addi %r7, %r7, 1
    bdnz inner_loop
    addi %r6, %r6, 1
    b outer_loop
outer_loop_end:
    blr
