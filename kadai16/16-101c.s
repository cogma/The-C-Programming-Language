.globl f
    .section .text
f:
    mflr %r0
    std %r0, 16(%r1)
    stdu %r1, -112(%r1)
    li %r0, 78
    addi %r3, %r1, 96
    li %r4, 0
    sc
    ld %r9, 96(%r1)
    li %r10, 60
    divdu %r9, %r9, %r10
    divdu %r8, %r9, %r10
    mulld %r5, %r8, %r10
    subf %r5, %r5, %r9
    li %r10, 24
    divdu %r4, %r8, %r10
    mulld %r4, %r4, %r10
    subf %r4, %r4, %r8
    addis %r3, %r2, .msg@toc@ha
    addi %r3, %r3, .msg@toc@l
    bl printf
    nop
    addi %r1, %r1, 112
    ld %r0, 16(%r1)
    mtlr %r0
    blr
    .section .rodata
    .align 3
.msg:
    .string "%02d:%02d\n"
