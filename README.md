#include "stm32f103.h"

	
void RCC_Init()
{
	RCC->APB2ENR|=((1<<2)|(1<<3)|(1<<14));   //enable Pa Pb Uart1
}
void GPIO_Init()
{
	GPIOA->CRL = 0x33333333; // A OUTPUT
	GPIOB->CRL = 0x44444444;  //B INPUT
	GPIOA->ODR = 0x0;  //A OUTPUT 0
}
void UART_Init()
{
	GPIOA->CRH=0x430;  //A10 INPUT; A9 OUTPUT
	USART1->BRR=0x1f4; //set baud 16kbps
	USART1->CR1=(1<<13)|(1<<3)|(1<<2); //ENABLE USART,TE,RE
}
int MAIN()
{
	RCC_Init();
	GPIO_Init();
	UART_Init();
	while(1)
	{
		if(USART1->SR&(0x1<<5)) //recieve data or not?
		{		
			GPIOA->ODR = USART1->DR; //GPIOA OUTPUT DATA
			
		}
	}
	return 0;
}
