struct  _RCC
{
	int CR;
	int CFGR;
	int CIR;
	int APB2RSTR;
	int APB1RSTR;
	int AHBENR;
	int APB2ENR;
	int APB1ENR;
	int BDCR;
	int CSR;
};
#define RCC ((volatile struct _RCC *)0x40021000)


struct  _GPIO
{
	int CRL;
	int CRH;
	int IDR;
	int ODR;
	int BSRR;
};
#define GPIOE ((volatile struct _GPIO *)0x40011800)
#define GPIOB ((volatile struct _GPIO *)0x40010C00)
#define GPIOA ((volatile struct _GPIO *)0x40010800)

struct _USART
{
	int SR;
	int DR;
	int BRR;
	int CR1;
	int CR2;
	int CR3;
};
#define USART1 ((volatile struct _USART *)0x40013800)

struct _NVIC
{
	int	ISER[8];
	int rsv0[24];
	int	ICER[8];
	int	rsv1[24];
	int	ISPR[8];
	int rsv2[24];
	int ICPR[8];
	int rsv3[24];
	int IABR[8];
	int rsv4[56];
	char IPR[240];
	int rsv5[644];
	int STIR;	
};
#define NVIC ((volatile struct _NVIC *)0xE000E100)


struct _AFIO
{
  int EVCR;
  int MAPR;
  int EXTICR[4];
  int RESERVED0;
  int MAPR2;  
};
#define AFIO ((volatile struct _AFIO *) 0x40010000)
	
struct _EXTI
{
  int  IMR;
  int EMR;
  int RTSR;
  int FTSR;
  int SWIER;
  int PR;
} ;
#define EXTI ((volatile struct _EXTI *) 0x40010400 )
	
struct _BTIM
{
	int CR1;
	int CR2;
	int rsv0;
	int DIER;
	int SR;
	int rsv1[4];
	int CNT;
	int PSC;
	int ARR;
};
#define TIM1 ((volatile struct _BTIM *)0x40012C00)

struct _DMA_CH{
	int CCR;
	int CNDTR;
	int CPAR;
	int CMAR;
	int rsv;
};
struct _DMA{
	int ISR;
	int IFCR;
	struct _DMA_CH CH[7];
};
#define DMA1 ((volatile struct _DMA *)0x40020000)
#define DMA2 ((volatile struct _DMA *)0x40020400)

struct _AA
{
//	int n;
	int sum;
	int min;
	int max;
	int mean;
	int time_all;
};
#define AA ((volatile struct _AA*) 0x20000000)
