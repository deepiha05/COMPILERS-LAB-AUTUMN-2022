	.file	"ass6_20CS10024_20CS30015_test4.c"
	.text
	.globl	maxSubArrSum
	.type	maxSubArrSum, @function
maxSubArrSum:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$-1000, -12(%rbp)
	movl	$0, -8(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L5:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	addl	%eax, -8(%rbp)
	movl	-12(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L3
	movl	-8(%rbp), %eax
	movl	%eax, -12(%rbp)
.L3:
	cmpl	$0, -8(%rbp)
	jns	.L4
	movl	$0, -8(%rbp)
.L4:
	addl	$1, -4(%rbp)
.L2:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L5
	movl	-12(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	maxSubArrSum, .-maxSubArrSum
	.section	.rodata
.LC0:
	.string	"Maximum contiguous sum is "
.LC1:
	.string	"\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$-20, -48(%rbp)
	movl	$-30, -44(%rbp)
	movl	$40, -40(%rbp)
	movl	$-10, -36(%rbp)
	movl	$-20, -32(%rbp)
	movl	$10, -28(%rbp)
	movl	$50, -24(%rbp)
	movl	$-370, -20(%rbp)
	leaq	-48(%rbp), %rax
	movl	$8, %esi
	movq	%rax, %rdi
	call	maxSubArrSum
	movl	%eax, -52(%rbp)
	leaq	.LC0(%rip), %rdi
	call	printStr@PLT
	movl	-52(%rbp), %eax
	movl	%eax, %edi
	call	printInt@PLT
	leaq	.LC1(%rip), %rdi
	call	printStr@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L9
	call	__stack_chk_fail@PLT
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
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
