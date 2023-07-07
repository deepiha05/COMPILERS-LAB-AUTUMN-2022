	.file	"ass6_20CS10024_20CS30015_test1.c"
	.text
	.globl	global_var
	.bss
	.align 4
	.type	global_var, @object
	.size	global_var, 4
global_var:
	.zero	4
	.text
	.globl	binarySearch
	.type	binarySearch, @function
binarySearch:
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
	movl	%edx, -32(%rbp)
	movl	%ecx, -36(%rbp)
	jmp	.L2
.L6:
	movl	-28(%rbp), %edx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -36(%rbp)
	jne	.L3
	movl	-4(%rbp), %eax
	jmp	.L4
.L3:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -36(%rbp)
	jle	.L5
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -28(%rbp)
	jmp	.L2
.L5:
	movl	-4(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -32(%rbp)
.L2:
	movl	-28(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jle	.L6
	movl	$-1, %eax
.L4:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	binarySearch, .-binarySearch
	.section	.rodata
	.align 8
.LC0:
	.string	"Enter 10 array elements in sorted order, separated by newlines:\n"
.LC1:
	.string	"Entered array : "
.LC2:
	.string	" "
.LC3:
	.string	"\n"
.LC4:
	.string	"Number to search: "
	.align 8
.LC5:
	.string	"Invalid search, element not found"
.LC6:
	.string	"Element found\n"
.LC7:
	.string	"Position: "
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
	movl	global_var(%rip), %eax
	addl	$1, %eax
	movl	%eax, global_var(%rip)
	leaq	.LC0(%rip), %rdi
	call	printStr@PLT
	movl	$0, -60(%rbp)
	jmp	.L8
.L9:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	readInt@PLT
	movl	-60(%rbp), %edx
	movslq	%edx, %rdx
	movl	%eax, -48(%rbp,%rdx,4)
	addl	$1, -60(%rbp)
.L8:
	cmpl	$9, -60(%rbp)
	jle	.L9
	leaq	.LC1(%rip), %rdi
	call	printStr@PLT
	movl	$0, -60(%rbp)
	jmp	.L10
.L11:
	movl	-60(%rbp), %eax
	cltq
	movl	-48(%rbp,%rax,4), %eax
	movl	%eax, %edi
	call	printInt@PLT
	leaq	.LC2(%rip), %rdi
	call	printStr@PLT
	addl	$1, -60(%rbp)
.L10:
	cmpl	$9, -60(%rbp)
	jle	.L11
	leaq	.LC3(%rip), %rdi
	call	printStr@PLT
	leaq	.LC4(%rip), %rdi
	call	printStr@PLT
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	readInt@PLT
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %edx
	leaq	-48(%rbp), %rax
	movl	%edx, %ecx
	movl	$9, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	binarySearch
	movl	%eax, -52(%rbp)
	cmpl	$-1, -52(%rbp)
	jne	.L12
	leaq	.LC5(%rip), %rdi
	call	printStr@PLT
	jmp	.L13
.L12:
	leaq	.LC6(%rip), %rdi
	call	printStr@PLT
	leaq	.LC7(%rip), %rdi
	call	printStr@PLT
	movl	-52(%rbp), %eax
	movl	%eax, %edi
	call	printInt@PLT
.L13:
	leaq	.LC3(%rip), %rdi
	call	printStr@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L15
	call	__stack_chk_fail@PLT
.L15:
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
