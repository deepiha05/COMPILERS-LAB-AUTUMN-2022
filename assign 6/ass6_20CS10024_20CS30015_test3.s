	.file	"ass6_20CS10024_20CS30015_test3.c"
	.text
	.globl	global_var
	.bss
	.align 4
	.type	global_var, @object
	.size	global_var, 4
global_var:
	.zero	4
	.globl	counter
	.align 4
	.type	counter, @object
	.size	counter, 4
counter:
	.zero	4
	.section	.rodata
.LC0:
	.string	"Enter n (n < 20): "
.LC1:
	.string	"fib["
.LC2:
	.string	"] = "
.LC3:
	.string	"\n"
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
	subq	$432, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	counter(%rip), %eax
	addl	$1, %eax
	movl	%eax, counter(%rip)
	movl	counter(%rip), %eax
	movl	%eax, global_var(%rip)
	leaq	.LC0(%rip), %rdi
	call	printStr@PLT
	leaq	-428(%rbp), %rax
	movq	%rax, %rdi
	call	readInt@PLT
	movl	%eax, -420(%rbp)
	movl	$0, -424(%rbp)
	jmp	.L2
.L3:
	movl	-424(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %edi
	call	fibn
	movl	-424(%rbp), %edx
	movslq	%edx, %rdx
	movl	%eax, -416(%rbp,%rdx,4)
	movl	counter(%rip), %eax
	addl	$1, %eax
	movl	%eax, counter(%rip)
	movl	counter(%rip), %eax
	movl	%eax, global_var(%rip)
	addl	$1, -424(%rbp)
.L2:
	movl	-424(%rbp), %eax
	cmpl	-420(%rbp), %eax
	jl	.L3
	movl	$0, -424(%rbp)
	jmp	.L4
.L5:
	leaq	.LC1(%rip), %rdi
	call	printStr@PLT
	movl	-424(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %edi
	call	printInt@PLT
	leaq	.LC2(%rip), %rdi
	call	printStr@PLT
	movl	-424(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	%eax, %edi
	call	printInt@PLT
	leaq	.LC3(%rip), %rdi
	call	printStr@PLT
	addl	$1, -424(%rbp)
.L4:
	movl	-424(%rbp), %eax
	cmpl	-420(%rbp), %eax
	jl	.L5
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	fibn
	.type	fibn, @function
fibn:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movl	%edi, -20(%rbp)
	movl	counter(%rip), %eax
	addl	$1, %eax
	movl	%eax, counter(%rip)
	movl	counter(%rip), %eax
	movl	%eax, global_var(%rip)
	cmpl	$0, -20(%rbp)
	jne	.L9
	movl	$0, %eax
	jmp	.L10
.L9:
	cmpl	$1, -20(%rbp)
	je	.L11
	cmpl	$2, -20(%rbp)
	jne	.L12
.L11:
	movl	$1, %eax
	jmp	.L10
.L12:
	movl	-20(%rbp), %eax
	subl	$1, %eax
	movl	%eax, %edi
	call	fibn
	movl	%eax, %ebx
	movl	-20(%rbp), %eax
	subl	$2, %eax
	movl	%eax, %edi
	call	fibn
	addl	%ebx, %eax
.L10:
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	fibn, .-fibn
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
