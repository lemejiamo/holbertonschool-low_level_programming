section .data
	global main

main:
	mov rax, 4
	mov rbx, 1
	mov rcx, message
	mov rdx, length
	int 80h

	mov rax, 1
	mov rbx, 0
	int 80h

message:		db "Hello, Holberton", 10
length:		    	equ $ - message
