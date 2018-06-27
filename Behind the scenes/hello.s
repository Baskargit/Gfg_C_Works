	.file	"hello.c"
	.section	.rodata
.LC0:
	.string	"Hello World"
.LC1:
	.string	"Value of hello is %d\n"
.LC2:
	.string	"A+b is %d\n"
.LC3:
	.string	"hello.c"
.LC4:
	.string	"Current File :%s\n"
.LC5:
	.string	"May 31 2018"
.LC6:
	.string	"Current Date :%s\n"
.LC7:
	.string	"14:26:46"
.LC8:
	.string	"Current Time :%s\n"
.LC9:
	.string	"Line Number :%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$20, -8(%rbp)
	movl	$10, -4(%rbp)
	movl	$.LC0, %edi
	call	puts
	movl	-8(%rbp), %eax
	addl	$120, %eax
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	addl	%eax, %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$10, %edi
	call	putchar
	movl	$.LC3, %esi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC5, %esi
	movl	$.LC6, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC7, %esi
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	movl	$16, %esi
	movl	$.LC9, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
