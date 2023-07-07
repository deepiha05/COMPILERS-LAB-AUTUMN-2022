	.file	"ass6_20CS10024_20CS30015_test6.c"
	.text
	.globl	d
	.data
	.align 4
	.type	d, @object
	.size	d, 4
d:
	.long	1075000115
	.comm	c,1,1
	.comm	i,4,4
	.comm	j,4,4
	.comm	k,4,4
	.comm	l,4,4
	.comm	m,4,4
	.comm	n,4,4
	.comm	o,4,4
	.globl	a
	.align 4
	.type	a, @object
	.size	a, 4
a:
	.long	4
	.comm	p,8,8
	.comm	b,4,4
	.section	.rodata
.LC0:
	.string	"Entered for iteration "
.LC1:
	.string	"\n"
.LC2:
	.string	"\nScope 1: "
.LC3:
	.string	"\nScope 2: "
	.align 8
.LC4:
	.string	"\nEntered in the w == 3 condition if block."
.LC5:
	.string	"\nScope 3: "
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$1, -16(%rbp)
.L2:
	leaq	.LC0(%rip), %rdi
	call	printStr@PLT
	movl	-16(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -16(%rbp)
	movl	%eax, %edi
	call	printInt@PLT
	leaq	.LC1(%rip), %rdi
	call	printStr@PLT
	cmpl	$9, -16(%rbp)
	jle	.L2
	movl	$10, -12(%rbp)
	leaq	.LC2(%rip), %rdi
	call	printStr@PLT
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	printInt@PLT
	movl	$2, -8(%rbp)
	leaq	.LC3(%rip), %rdi
	call	printStr@PLT
	movl	-8(%rbp), %eax
	movl	%eax, %edi
	call	printInt@PLT
	movl	$3, -4(%rbp)
	cmpl	$3, -4(%rbp)
	jne	.L3
	leaq	.LC4(%rip), %rdi
	call	printStr@PLT
.L3:
	leaq	.LC5(%rip), %rdi
	call	printStr@PLT
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	printInt@PLT
	leaq	.LC1(%rip), %rdi
	call	printStr@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
