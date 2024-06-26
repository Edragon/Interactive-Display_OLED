//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//中景园电子
//店铺地址：http://shop73023976.taobao.com/?spm=2013.1.0.0.M4PqC2
//
//  文 件 名   : main.c
//  版 本 号   : v2.0
//  作    者   : Evk123
//  生成日期   : 2014-0101
//  最近修改   : 
//  功能描述   : 2.23寸OLED 接口演示例程(STM32F103ZE系列IIC)
//              说明: 
//              ----------------------------------------------------------------
//              GND   电源地
//              VCC   接5V或3.3v电源
//              SCL   接PD6（SCL）
//              SDA   接PD7（SDA）            
//              ----------------------------------------------------------------
//Copyright(C) 中景园电子2014/3/16
//All rights reserved
//////////////////////////////////////////////////////////////////////////////////

#include "delay.h"
#include "sys.h"
#include "oled.h"
#include "bmp.h"
 int main(void)
  {	u8 t;
		delay_init();	    	 //延时函数初始化	  
		NVIC_Configuration(); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级 	LED_Init();			     //LED端口初始化
//		delay_ms(8000);
		OLED_Init();			//初始化OLED  
		OLED_Clear()  	; 
	
		t=' ';
		OLED_ShowCHinese(0,0,0);//中
				OLED_ShowCHinese(18,0,1);//景
		OLED_ShowCHinese(36,0,2);//园
		OLED_ShowCHinese(54,0,3);//电
		OLED_ShowCHinese(72,0,4);//子
		OLED_ShowCHinese(90,0,5);//科
		OLED_ShowCHinese(108,0,6);//技
	while(1) 
	{		
		OLED_Clear();
		OLED_ShowString(0,0,"0.91OLEDTEST",8);
		OLED_ShowString(0,1,"0123456789AB",8);
		delay_ms(1000);
		delay_ms(1000);
		delay_ms(1000);
		OLED_Clear();
	   OLED_ShowString(0,0,"0.91OLEDTEST",16);
			delay_ms(1000);
	  	delay_ms(1000);
	  	delay_ms(1000);
	 	  OLED_Clear();
		OLED_ShowString(0,0,"0123456789AB",16);

			delay_ms(1000);
	  	delay_ms(1000);
	  	delay_ms(1000);
	 	  OLED_Clear();
		OLED_ShowCHinese(4,1,0);//中
		OLED_ShowCHinese(22,1,1);//景
		OLED_ShowCHinese(40,1,2);//园
		OLED_ShowCHinese(58,1,3);//电
		OLED_ShowCHinese(76,1,4);//子
		OLED_ShowCHinese(94,1,5);//科
		OLED_ShowCHinese(112,1,6);//技
			delay_ms(1000);
	  	delay_ms(1000);
	  	delay_ms(1000);
			OLED_Clear();
	OLED_DrawBMP(0,0,128,8,BMP1);
			delay_ms(1000);
			delay_ms(1000);
	  	delay_ms(1000);
			 OLED_Clear();

	}	  
	
}
	