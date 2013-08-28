# this is my first asm code
.globl _start

_start:
movl $1, %eax
movl $2, %ebx
int $0x80
