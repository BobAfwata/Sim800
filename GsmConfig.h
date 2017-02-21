#ifndef	_GSMCONFIG_H
#define	_GSMCONFIG_H


#define		_GSM_DUAL_SIM_SUPPORT				1

#define		_GSM_USART							huart1

#define		_GSM_POWER_PORT						GSM_POWER_PIN_GPIO_Port							
#define		_GSM_POWER_PIN						GSM_POWER_PIN_Pin
#define		_GSM_POWER_STATUS_PORT				GSM_POWER_STATUS_GPIO_Port	
#define		_GSM_POWER_STATUS_PIN				GSM_POWER_STATUS_Pin

#define		_GSM_RX_SIZE						512
#define		_GSM_TX_SIZE						256
#define		_GSM_TASK_SIZE						512


#define		_GSM_WAIT_TIME_LOW					1000
#define		_GSM_WAIT_TIME_MED					10000
#define		_GSM_WAIT_TIME_HIGH					25000
#define		_GSM_WAIT_TIME_VERYHIGH				60000



#endif
