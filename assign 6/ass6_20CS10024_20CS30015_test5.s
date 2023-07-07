	.file	"ass6_20CS10024_20CS30015_test5.c"
	.text
	.globl	merge
	.type	merge, @function
merge:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	addq	$-128, %rsp
	movq	%rdi, -104(%rbp)
	movl	%esi, -108(%rbp)
	movl	%edx, -112(%rbp)
	movl	%ecx, -116(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	-112(%rbp), %eax
	subl	-108(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -76(%rbp)
	movl	-116(%rbp), %eax
	subl	-112(%rbp), %eax
	movl	%eax, -72(%rbp)
	movl	$0, -88(%rbp)
	jmp	.L2
.L3:
	movl	-108(%rbp), %edx
	movl	-88(%rbp), %eax
	addl	%edx, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-88(%rbp), %eax
	cltq
	movl	%edx, -64(%rbp,%rax,4)
	addl	$1, -88(%rbp)
.L2:
	movl	-88(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jl	.L3
	movl	$0, -84(%rbp)
	jmp	.L4
.L5:
	movl	-112(%rbp), %edx
	movl	-84(%rbp), %eax
	addl	%edx, %eax
	addl	$1, %eax
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-84(%rbp), %eax
	cltq
	movl	%edx, -32(%rbp,%rax,4)
	addl	$1, -84(%rbp)
.L4:
	movl	-84(%rbp), %eax
	cmpl	-72(%rbp), %eax
	jl	.L5
	movl	$0, -88(%rbp)
	movl	$0, -84(%rbp)
	movl	-108(%rbp), %eax
	movl	%eax, -80(%rbp)
	jmp	.L6
.L10:
	movl	-88(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %edx
	movl	-84(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	cmpl	%eax, %edx
	jg	.L7
	movl	-80(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	addq	%rax, %rdx
	movl	-88(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	movl	%eax, (%rdx)
	addl	$1, -88(%rbp)
	jmp	.L8
.L7:
	movl	-80(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	addq	%rax, %rdx
	movl	-84(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	movl	%eax, (%rdx)
	addl	$1, -84(%rbp)
.L8:
	addl	$1, -80(%rbp)
.L6:
	movl	-88(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jge	.L11
	movl	-84(%rbp), %eax
	cmpl	-72(%rbp), %eax
	jl	.L10
	jmp	.L11
.L12:
	movl	-80(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	addq	%rax, %rdx
	movl	-88(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	movl	%eax, (%rdx)
	addl	$1, -88(%rbp)
	addl	$1, -80(%rbp)
.L11:
	movl	-88(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jl	.L12
	jmp	.L13
.L14:
	movl	-80(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	addq	%rax, %rdx
	movl	-84(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	movl	%eax, (%rdx)
	addl	$1, -84(%rbp)
	addl	$1, -80(%rbp)
.L13:
	movl	-84(%rbp), %eax
	cmpl	-72(%rbp), %eax
	jl	.L14
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L16
	call	__stack_chk_fail@PLT
.L16:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	merge, .-merge
	.globl	mergeSort
	.type	mergeSort, @function
mergeSort:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movl	-28(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jge	.L19
	movl	-28(%rbp), %edx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %edx
	movl	-28(%rbp), %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	mergeSort
	movl	-4(%rbp), %eax
	leal	1(%rax), %ecx
	movl	-32(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	mergeSort
	movl	-32(%rbp), %ecx
	movl	-4(%rbp), %edx
	movl	-28(%rbp), %esi
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	merge
.L19:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	mergeSort, .-mergeSort
	.section	.rodata
.LC0:
	.string	" "
.LC1:
	.string	"\n"
	.text
	.globl	printArray
	.type	printArray, @function
printArray:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L21
.L22:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %edi
	call	printInt@PLT
	leaq	.LC0(%rip), %rdi
	call	printStr@PLT
	addl	$1, -4(%rbp)
.L21:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L22
	leaq	.LC1(%rip), %rdi
	call	printStr@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	printArray, .-printArray
	.section	.rodata
.LC2:
	.string	"Merge Sort\n"
.LC3:
	.string	"Original array: \n"
.LC4:
	.string	"Sorted array: \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC2(%rip), %rdi
	call	printStr@PLT
	movl	$64, -32(%rbp)
	movl	$21, -28(%rbp)
	movl	$11, -24(%rbp)
	movl	$15, -20(%rbp)
	movl	$28, -16(%rbp)
	movl	$9, -12(%rbp)
	movl	$6, -36(%rbp)
	leaq	.LC3(%rip), %rdi
	call	printStr@PLT
	movl	-36(%rbp), %edx
	leaq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	movl	-36(%rbp), %eax
	leal	-1(%rax), %edx
	leaq	-32(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	mergeSort
	leaq	.LC4(%rip), %rdi
	call	printStr@PLT
	movl	-36(%rbp), %edx
	leaq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L25
	call	__stack_chk_fail@PLT
.L25:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
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
