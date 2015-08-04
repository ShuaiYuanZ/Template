#include "delay.h"
#include "sys.h"
#include "usart.h"


int main(void)
{		
    int i=0;
	delay_init();	    	 //延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(115200);	 //串口初始化为115200
 
 	while(1)
	{
		for(i = 0; i<100;i++)
            delay_ms(200);
	}	 
}

