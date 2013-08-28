	.section	 .data
.LC0:
	.string"hello ,world\n"
	.text
	.globl _start
_start:
#write(1, "hello", 10);
	movl $4, %eax #write(?)
	movl $1, %ebx #write(1,)
	movl $.LC0, %ecx #
	movl $ 13, %edx
	int  $ 0x80
	
	movl $1, %eax
	movl $0, %ebx
	int  $0x80
#exit(0)
	movl $1, %ecx #
	movl $0,  %ebx
	int  $ 0x80

