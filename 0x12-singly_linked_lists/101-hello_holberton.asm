section .data
	hello db 'Hello, Holberton', 0

section .text
	global _start

_start:
	; Call the printf function to print the message
	mov rdi, hello	; Load the address of the format string
	call printf	; Call the printf function
	add rsp, 8	; Clean up the stack after the call

	; Exit the program
	mov rax, 60	; System call number for sys_exit (60)
	xor edi, edi	; Exit status 0
	syscall

section .bss
	resb 1		; Reserve 1 byte for the null terminator
