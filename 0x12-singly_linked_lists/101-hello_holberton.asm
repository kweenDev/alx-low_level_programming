section .data
	hello db 'Hello, Holberton', 0
	format db '%s', 10, 0	; Format string for printf, with a newline character (10)

section .text
	extern printf

global main

main:
	; Set up the stack frame for printf
	push rbp
	mov rdi, format	; First argument: Format string
	mov rsi, hello	; Second argument: Pointer to the string to be printed
	xor rax, rax	; Clear rax to indicate no vector registers are used
	call printf	; Call the printf function
	pop rbp		; Restore the stack frame

	; Exit the program
	mov rax, 60	; System call number for sys_exit (60)
	xor edi, edi	; Exit status 0
	syscall
