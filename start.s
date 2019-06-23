	AREA RESET,CODE
	EXPORT __Vectors
	EXPORT Reset_Handler
__Vectors
	DCD __initial_sp
	DCD Reset_Handler
	
Reset_Handler PROC
	IMPORT MAIN
	ldr r1,=MAIN
	bx r1
	B .
	ENDP
			

	AREA STACK,DATA
	SPACE 0x100
__initial_sp

	END
