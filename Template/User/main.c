#include "delay.h"
#include "sys.h"
#include "usart.h"


int main(void)
{		
    int i=0;
	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 //���ڳ�ʼ��Ϊ115200
 
 	while(1)
	{
		for(i = 0; i<100;i++)
            delay_ms(200);
	}	 
}

