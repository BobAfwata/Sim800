# Sim800 series library
<br />
I hope use it and enjoy.
<br />
GsmLib on Example maybe older version.Replace with new version.
<br />
I use Stm32f103C8 and Keil Compiler and Stm32CubeMX wizard.
 <br />
Please Do This ...
<br />
<br />
1) Enable FreeRTOS  
<br />
2) Config your usart and enable interrupt on CubeMX 
<br />
3) 2 control Pin needed. (PowerKey>>>>output,open drain,default to SET) and (Power status>>>>input,pulldown)
<br />
4) Select "General peripheral Initalizion as a pair of '.c/.h' file per peripheral" on project settings.
<br />
5) Config your GsmConfig.h file.
<br />
6) Add Gsm_RxCallBack() on usart interrupt routin. 
<br />
7) call  Gsm_Init(osPriorityNormal) on your app.
<br />
8) Config your app on GsmUser.c.



