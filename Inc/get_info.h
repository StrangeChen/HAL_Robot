#ifndef __GETPOSITION_H
#define __GETPOSITION_H


#include "stm32f4xx_hal.h"
#include "tim.h"
#include "control.h"
#include "sys.h"

//extern uint8_t sum,i;

void ReadEncoder(void);

void receiveIMUData(void);
u8 GetYaw(void);

void GetPosition(void);		//坐标转换

void receiveVisionData(void);
u8 GetVisionData(void);		//视觉数据处理

void receiveRadarData(void);
u8 GetRadarData(void);		//激光处理数据

#endif

