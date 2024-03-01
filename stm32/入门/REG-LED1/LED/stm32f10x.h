//#if 0
//外设与总线基地址
#define PHRIPH_BASE    (unsigned int) 0x40000000
#define APB1PHRIPH_BASE    PHRIPH_BASE
#define APB2PHRIPH_BASE    (PHRIPH_BASE + 0x10000)
#define AHBPHRIPH_BASE    (PHRIPH_BASE + 0x20000)

//GPIOB与时钟基地址
#define GPIO_BASE    (APB2PHRIPH_BASE + 0x0C00)
#define RCC_BASE    (AHBPHRIPH_BASE + 0x1000)

////寄存器地址
//#define GPIO_CRL    *(unsigned int*)(GPIO_BASE + 0)
//#define GPIO_CRH    *(unsigned int*)(GPIO_BASE + 0x04)
//#define GPIO_ODR    *(unsigned int*)(GPIO_BASE + 0x0C)


#define RCC_APB2ENR    *(unsigned int*)(RCC_BASE + 0x18)

//#elseif 1


//GPIO寄存器结构体声明
typedef unsigned int    uint_32;
typedef unsigned short    uint_16;
typedef struct
{
	uint_32 CRL;
	uint_32 CRH;
	uint_32 IDR;
	uint_32 ODR;
	uint_32 BSRR;
	uint_32 BRR;
	uint_32 LCKR;
}GPIO_Typedef;
#define GPIOB     ((GPIO_Typedef*) GPIO_BASE)

//RCC外设的寄存器结构体声明
typedef struct
{
	uint_32 CR;
	uint_32 CFGR;
	uint_32 CIR;
	uint_32 APB2RSTR;
	uint_32 APB1RSTR;
	uint_32 AHBENR;
	uint_32 APB2ENR;
	uint_32 APB1ENR;
	uint_32 BDCR;
	uint_32 CSR;
}RCC_Typedef;
#define RCC   ((RCC_Typedef*) RCC_BASE)



//#endif

