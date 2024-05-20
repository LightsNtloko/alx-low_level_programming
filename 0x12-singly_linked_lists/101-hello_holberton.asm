		extern	printf		; The C functin that must be called

	section .info			; Data section, wit declared variables
msg:	db "Hello, Holberton", 0	; The C strings requires 0
fmt:	db "%s", 10, 0			; The printf format, "\n", '0'

	section .text			; The code section

	global main			; The standard gcc compiler entry point
main:					; The lable for program entry point
	push	rbp			; Set u the stack frame, and alligned

	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0			; else can be xor rax,rax
	call	printf			; Call the C fuction

	pop	rbp			; Then restore the stack

	mov	rax,0			; normal, no error, return value
	ret				; return
