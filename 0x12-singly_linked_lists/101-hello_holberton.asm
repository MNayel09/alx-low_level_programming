section .data
	message: db "Hello, Holberton",10,0
	format: db "%s",0

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	mov rdi, format
	mov rsi, message
	call printf

	pop rbp
	mov rax, 0
	ret
