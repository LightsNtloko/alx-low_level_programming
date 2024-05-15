section .data
	hello db "Hello, Holberton", 0

section .text
	global _asm_start

_start:
	; Call printf function from C library
	extern printf

	; Push the address of the string onto the stack
	push    hello
	; Call printf with the address of the string as argument
	call printf


	; Exit the program
	mov eax, 60	; syscall number for exit
	xor edi, edi	; exit code 0
	syscall
