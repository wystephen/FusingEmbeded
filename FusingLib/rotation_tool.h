

#ifndef __ROTATION_TOOL_H__
#define  __ROTATION_TOOL_H__
#include "stm32f4xx_hal.h"

//#define FLOAT float32_t

void modified_char(char *data,int size){
	for(int i=0;i<size;++i){
		data[i] = 'a' + i%26;
	}
}

#endif
