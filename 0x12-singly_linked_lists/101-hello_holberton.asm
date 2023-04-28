section .data
	message db 'Hello, Holberton',0
	format db '%s', 10, 0

section .text
	global main

main:
	; Set up stack frame
	push rbp
	mov rbp, rsp

	; Pass arguments to printf and call it
	mov rdi, format
	mov rsi, message
	xor rax, rax
	call printf

	; Clean up stack and exit
	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret

