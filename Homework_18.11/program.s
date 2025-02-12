	.file	"zad2.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"Least common multiple \320\275\320\260 %d \320\270 %d \320\265: %d\n"
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
	subq	$32, %rsp
	movl	$12, -16(%rbp)
	movl	$18, -12(%rbp)
	movl	$0, -8(%rbp)
	movl	-12(%rbp), %edx
	movl	-16(%rbp), %eax
	cmpl	%eax, %edx
	cmovge	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, -20(%rbp)
.L4:
	movl	-20(%rbp), %eax
	cltd
	idivl	-16(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L2
	movl	-20(%rbp), %eax
	cltd
	idivl	-12(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L2
	movl	-20(%rbp), %eax
	movl	%eax, -8(%rbp)
	jmp	.L6
.L2:
	movl	-4(%rbp), %eax
	addl	%eax, -20(%rbp)
	jmp	.L4
.L6:
	movl	-8(%rbp), %ecx
	movl	-12(%rbp), %edx
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
