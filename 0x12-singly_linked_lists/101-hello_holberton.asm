section .data
    hello db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; Print the message
    mov rax, 1
    mov rdi, 1
    mov rsi, hello
    mov rdx, 16
    syscall

    ; Exit the program
    mov rax, 60
    xor edi, edi
    syscall
