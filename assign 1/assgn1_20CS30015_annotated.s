# COMPILERS LAB ASSIGNMENT 1 #
# DEEPIHA.S #
# 20CS30015 #

	.file	"assgn1.c"			# file name
	.text					# code starts					
	.section	.rodata			# read only data section
	.align 8				# align with 8 byte boundary
.LC0:						# label of f-string first printf
	.string	"Enter the string (all lower case): "
.LC1:						# label of f-string scanf
	.string	"%s"
.LC2:						# label of f-string second printf	
	.string	"Length of the string: %d\n"
	.align 8				# align with 8 byte boundary
.LC3:						# label of f-string third printf
	.string	"The string in descending order: %s\n"
	.text					# code starts
	.globl	main				# main is a global name
	.type	main, @function			# main is a function
main:						# main function starts
.LFB0:
	.cfi_startproc				# call frame information
	endbr64
	pushq	%rbp				# save old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp			# rbp <-- rsp set new stack base pointer
	.cfi_def_cfa_register 6
	subq	$80, %rsp			# create space for char arrays str, dest and variable int len
	movq	%fs:40, %rax			# access value of %fs:40 and store it in %rax
	movq	%rax, -8(%rbp)			# (rbp-8) <-- rax
	xorl	%eax, %eax			# making the register eax zero
	leaq	.LC0(%rip), %rax		# rax <-- first printf statement as argument
	movq	%rax, %rdi			# rdi <-- rax
	movl	$0, %eax			# eax <-- 0
	call	printf@PLT			# call printf
	leaq	-64(%rbp), %rax			# rax <-- (rbp - 64)
	movq	%rax, %rsi			# rsi <-- rax
	leaq	.LC1(%rip), %rax		# rax <-- scanf statement as argument
	movq	%rax, %rdi			# rdi <-- rax
	movl	$0, %eax			# eax <-- 0
	call	__isoc99_scanf@PLT		# call scanf return value is in eax 
						# which is the input string
	leaq	-64(%rbp), %rax			# rax <-- (rbp-64) (&str) 
	movq	%rax, %rdi			# rdi <-- rax (copy str to rdi)(which is the argument to length function)
	call	length				# call length function, return value is in eax which is length of str
	movl	%eax, -68(%rbp)			# (rbp-68) <-- eax (store len)
	movl	-68(%rbp), %eax			# eax <-- len
	movl	%eax, %esi			# esi <-- eax
						# second argument to printf
	leaq	.LC2(%rip), %rax		# rax <-- second printf statement as first argument
	movq	%rax, %rdi			# rdi <-- rax
	movl	$0, %eax			# eax <-- 0
	call	printf@PLT			# call printf
	leaq	-32(%rbp), %rdx			# rdx <-- dest # third argument to sort
	movl	-68(%rbp), %ecx			# ecx <-- (rbp-68) (&len)
	leaq	-64(%rbp), %rax			# rax <-- (rbp-64) (&str)
	movl	%ecx, %esi			# esi <-- ecx (len as second argument)
	movq	%rax, %rdi			# rdi <-- rax (str as first argument)
	call	sort				# call sort
	leaq	-32(%rbp), %rax			# rax <-- (rbp-32) 
	movq	%rax, %rsi			# rsi <-- rax
	leaq	.LC3(%rip), %rax		# rax <-- third printf statement as argument
	movq	%rax, %rdi			# rdi <-- rax
	movl	$0, %eax			# eax <-- 0
	call	printf@PLT			# call printf
	movl	$0, %eax			# eax <-- 0
	movq	-8(%rbp), %rdx			# rdx <-- (rbp-8)
	subq	%fs:40, %rdx			# compare rcx with canary			
	je	.L3				# if rcx==canary, jump to .L3 
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret					# return
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	length				# length is a global name
	.type	length, @function		# length is a function
length:						# length function starts
.LFB1:
	.cfi_startproc				# call frame information
	endbr64
	pushq	%rbp				# save old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp			# rbp <-- rsp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)			# (rbp-24) <-- rdi (copying the str(argument) to rbp)
	movl	$0, -4(%rbp)			# (rbp-4) <-- 0 (i = 0, i is the length pointer)
	jmp	.L5				# jump to .L5 to execute for loop 
.L6:
	addl	$1, -4(%rbp)			# (rbp-4) = (rbp-4) +1, (i++)
.L5:
	movl	-4(%rbp), %eax			# eax <-- (rbp-4) (save i in eax)
	movslq	%eax, %rdx			# moves and saves the value stored in eax in 32 bits to rdx in 64 bits	
	movq	-24(%rbp), %rax			# rax <-- (rbp-24) save the argument str in rax
	addq	%rdx, %rax			# rax = rax +rdx
	movzbl	(%rax), %eax			# the lower 8 bits of eax are replaced by rax, top 24 bits set to 0 
	testb	%al, %al			# sets zero flag if al&al=0 (where al is the least significant bit of eax)
	jne	.L6				# jump to .L6 if above zero flag is not equal to 0
	movl	-4(%rbp), %eax			# eax <-- (rbp - 4) (i)
	popq	%rbp				# pop the base pointer
	.cfi_def_cfa 7, 8
	ret					# return
	.cfi_endproc
.LFE1:
	.size	length, .-length
	.globl	sort				# sort is a global name
	.type	sort, @function			# sort is a function
sort:						# sort function starts
.LFB2:
	.cfi_startproc				# call frame information
	endbr64
	pushq	%rbp				# save old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp			# rbp <-- rsp
	.cfi_def_cfa_register 6
	subq	$48, %rsp			# create space for variables i, j and temp
	movq	%rdi, -24(%rbp)			# (rbp-24) <-- rdi (copy the first argument str-input string)
	movl	%esi, -28(%rbp)			# (rbp-28) <-- esi (copy the second srgument len-length if input string)
	movq	%rdx, -40(%rbp)			# (rbp-40) <-- rdx (copy the third argumemt dest-output string)
	movl	$0, -8(%rbp)   			# (rbp-8) <-- 0 (i = 0)
	jmp	.L9   				# jump to .L9
.L13:
	movl	$0, -4(%rbp)			# (rbp-4) <-- 0 (j = 0)
	jmp	.L10				# jump to .L10
.L12:
	movl	-8(%rbp), %eax			# eax <-- (rbp-8) copy i to eax
	movslq	%eax, %rdx			# moves and saves the value stored in eax in 32 bits to rdx in 64 bits 
	movq	-24(%rbp), %rax			# rax <-- (rbp-24) copy str to rax
	addq	%rdx, %rax			# rax = rax +rdx
	movzbl	(%rax), %edx			# the lower 8 bits of edx are replaced by rax, top 24 bits set to 0 			
	movl	-4(%rbp), %eax			# eax <-- (rbp-4) copy j to eax
	movslq	%eax, %rcx			# moves and saves the value stored in eax in 32 bits to rcx in 64 bits
	movq	-24(%rbp), %rax			# rax <-- (rbp-24) copy str to rax
	addq	%rcx, %rax			# rax = rax + rcx
	movzbl	(%rax), %eax			# the lower 8 bits of eax are replaced by rax, top 24 bits set to 0 			
	cmpb	%al, %dl			# compare al and dl (the low 8 bits of eax and rdx respectively)
	jge	.L11				# if dl>=al, jump to .L11
	movl	-8(%rbp), %eax			# eax <-- (rbp-8), copy i to eax
	movslq	%eax, %rdx			# moves and saves the value stored in eax in 32 bits to rdx in 64 bits 
	movq	-24(%rbp), %rax			# rax <-- (rbp-24), copy str to rax
	addq	%rdx, %rax			# rax = rax + rdx
	movzbl	(%rax), %eax			# the lower 8 bits of eax are replaced by rax, top 24 bits set to 0 
	movb	%al, -9(%rbp)			# (rbp-9) <-- al; the low 8 bits of eax are moved to (rbp-9)
	movl	-4(%rbp), %eax			# eax <-- (rbp-4) copy j to eax
	movslq	%eax, %rdx			# moves and saves the value stored in eax in 32 bits to rdx in 64 bits
	movq	-24(%rbp), %rax			# rax <-- (rbp-24), copy str to rax
	addq	%rdx, %rax			# rax = rax + rdx
	movl	-8(%rbp), %edx			# edx <-- (rbp-8) copy i to edx
	movslq	%edx, %rcx			# moves and saves the value stored in edx in 32 bits to rcx in 64 bits 
	movq	-24(%rbp), %rdx			# rdx <-- (rbp-24), copy str to rdx
	addq	%rcx, %rdx			# rdx = rdx + rcx
	movzbl	(%rax), %eax			# the lower 8 bits of eax are replaced by rax, top 24 bits set to 0 
	movb	%al, (%rdx)			# rdx <-- al; the low 8 bits of eax are moved to rdx
	movl	-4(%rbp), %eax			# eax <-- (rbp-4), copy j to eax
	movslq	%eax, %rdx			# moves and saves the value stored in eax in 32 bits to rdx in 64 bits
	movq	-24(%rbp), %rax			# rax <-- (rbp-24), copy str to rax
	addq	%rax, %rdx			# rdx = rdx + rax
	movzbl	-9(%rbp), %eax			# the low 8 bits of eax are replaced by (rbp - 9), top 24 bits set to 0
	movb	%al, (%rdx)			# rdx <-- al; move the 8 low bits of eax to rdx
.L11:
	addl	$1, -4(%rbp)			# (rbp-4) = (rbp-4) + 1 , (j++)
.L10:
	movl	-4(%rbp), %eax			# eax <-- (rbp-4) store j in eax
	cmpl	-28(%rbp), %eax			# compares (%rbp-28) and %eax, i.e., len and j
	jl	.L12				# if j<len, jump to .L12
	addl	$1, -8(%rbp)			# (rbp-8) <-- 1, (i++)
.L9:
	movl	-8(%rbp), %eax			# eax <-- (rbp-8) store i in eax
	cmpl	-28(%rbp), %eax			# compares (%rbp-28) and %eax, i.e., len and i
	jl	.L13				# if i<len, jump to .L13
	movq	-40(%rbp), %rdx			# rdx <-- (rbp-40) copy dest to rdx (third argument of reverse)
	movl	-28(%rbp), %ecx			# ecx <-- (rbp-28) copy len to ecx (second argument of reverse)
	movq	-24(%rbp), %rax			# rax <-- (rbp-24) copy str to rax (first argument of reverse)
	movl	%ecx, %esi			# esi <-- ecx (len to esi)
	movq	%rax, %rdi			# rdi <-- rax (str to rdi)
	call	reverse				# call reverse
	nop
	leave
	.cfi_def_cfa 7, 8
	ret					# return
	.cfi_endproc
.LFE2:
	.size	sort, .-sort
	.globl	reverse				# reverse is a global name
	.type	reverse, @function		# reverse is a function
reverse:					# function reverse begins
.LFB3:
	.cfi_startproc				# call frame information
	endbr64
	pushq	%rbp				# save old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp			# rbp <-- rsp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)			# (rbp-24) <-- rdi, (copy the first argument str-input string)
	movl	%esi, -28(%rbp)			# (rbp-28) <-- esi, (copy the second argument len-length of the string)
	movq	%rdx, -40(%rbp)			# (rbp-40) <-- rdx, (copy the third argument dest-output string)
	movl	$0, -8(%rbp)			# (rbp-8) <-- 0 (i = 0)
	jmp	.L15				# jump to .L15
.L20:
	movl	-28(%rbp), %eax			# eax <-- (rbp-28) copy len to eax
	subl	-8(%rbp), %eax			# eax = eax - (rbp-8) (len = len -i)
	subl	$1, %eax			# eax = eax -1 (len = len -1)
	movl	%eax, -4(%rbp)			# (rbp-4) <-- eax (j=len)
	nop
	movl	-28(%rbp), %eax			# eax <-- (rbp-28) copy len to eax
	movl	%eax, %edx			# edx <-- eax
	shrl	$31, %edx			# logical right shift by 31 bits
	addl	%edx, %eax			# eax = eax +edx
	sarl	%eax				# arithmetic right shift by 1 bit
	cmpl	%eax, -4(%rbp)			# compares (%eax) and (%rbp-4), i.e compare len/2 and j
	jl	.L18				# if j<len/2, jump to .L18
	movl	-8(%rbp), %eax			# eax <-- (rbp-8), copy i to eax
	cmpl	-4(%rbp), %eax			# copmares (%rbp-4) and (%eax), i.e., compare j and i
	je	.L23				# if j==i, jump to .L23
	movl	-8(%rbp), %eax			#eax <-- (rbp-8), copy i to eax
	movslq	%eax, %rdx			# moves and saves value stored in eax in 32 bits to rdx in 64 bits
	movq	-24(%rbp), %rax			# rax <-- (rbp-24), copy str to rax
	addq	%rdx, %rax			# rax = rax + rdx
	movzbl	(%rax), %eax			# the low 8 bits of eax are replaced by rax, top 24 bits set to 0
	movb	%al, -9(%rbp)			# (rbp-9) <-- al; the low 8 bits of eax are moved to (rbp-9)
	movl	-4(%rbp), %eax			# eax <-- (rbp-4), copy j to eax
	movslq	%eax, %rdx			# moves and saves value stored in eax in 32 bits to rdx in 64 bits
	movq	-24(%rbp), %rax			# rax <-- (rbp-24), copy str to rax
	addq	%rdx, %rax			# rax = rax + rdx
	movl	-8(%rbp), %edx			# edx <-- (rbp-8), copy j to edx
	movslq	%edx, %rcx			# moves and saves value stored in edx in 32 bits to rcx in 64 bits
	movq	-24(%rbp), %rdx			# rdx <-- (rbp-24), copy the str to rdx
	addq	%rcx, %rdx			# rdx = rdx +rcx
	movzbl	(%rax), %eax			# the low 8 bits of eax are replaced by rax, top 24 bits set to 0			
	movb	%al, (%rdx)			# rdx <-- al; the low 8 bits of eax are moved to rdx
	movl	-4(%rbp), %eax			# eax <-- (rbp-4), copy j to eax
	movslq	%eax, %rdx			# moves and saves value stored in eax in 32 bits to rdx in 64 bits		
	movq	-24(%rbp), %rax			# rax <-- (rbp-24), copy str to rax
	addq	%rax, %rdx			# rdx = rdx +rax
	movzbl	-9(%rbp), %eax			# the low 8 bits of eax are replaced by (rbp - 9), top 24 bits set to 0
	movb	%al, (%rdx)			# rdx <-- al; the low 8 bits of eax are moved to rdx
	jmp	.L18				# jump to .L18
.L23:
	nop					# break
.L18:
	addl	$1, -8(%rbp)			# (rbp-8) = (rbp-8) + 1, i++
.L15:
	movl	-28(%rbp), %eax			# eax <-- (rbp-28) copy len to eax
	movl	%eax, %edx			# edx <-- eax
	shrl	$31, %edx			# logical right shift by 31 bits
	addl	%edx, %eax			# eax = eax + edx
	sarl	%eax				# arithmetic right shift by 1 bit
	cmpl	%eax, -8(%rbp)			# compares (%eax) and (%rbp-8), i.e compare len and i
	jl	.L20				# if (rbp-8) < eax, jump to .L20
	movl	$0, -8(%rbp)			# (rbp-8) <-- 0, i=0
	jmp	.L21				# jump to .L21
.L22:
	movl	-8(%rbp), %eax			# eax <-- (rbp-8), copy i to eax
	movslq	%eax, %rdx			# moves and saves value stored in eax in 32 bits to rdx in 64 bits
	movq	-24(%rbp), %rax			# rax <-- (rbp-24), copy str to rax
	addq	%rdx, %rax			# rax = rax + rdx
	movl	-8(%rbp), %edx			# edx <-- (rbp-8), copy i to edx
	movslq	%edx, %rcx			# moves and saves value stored in edx in 32 bits to rcx in 64 bits	
	movq	-40(%rbp), %rdx			# rdx <-- (rbp-40), copy dest to rdx
	addq	%rcx, %rdx			# rdx = rdx + rcx
	movzbl	(%rax), %eax			# the low 8 bits of eax are replaced by rax, top 24 bits set to 0		
	movb	%al, (%rdx)			# rdx <-- al; the low 8 bits of eax are moved to rdx			
	addl	$1, -8(%rbp)			# (rbp-8) = (rbp-8) + 1, i++
.L21:
	movl	-8(%rbp), %eax			# eax <-- (rbp-8), copy i to eax
	cmpl	-28(%rbp), %eax			# compares (%rbp-28) and (%eax), i.e., compare i and len
	jl	.L22				# if i<len, jump to .L22
	nop
	nop
	popq	%rbp				# pop the base pointer
	.cfi_def_cfa 7, 8
	ret					# return
	.cfi_endproc
.LFE3:
	.size	reverse, .-reverse
	.ident	"GCC: (Ubuntu 11.2.0-19ubuntu1) 11.2.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8				# align with 8 byte boundary
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8				# align with 8 byte boundary
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8				# align with 8 byte boundary
4:
