

#ifndef __ROTATION_TOOL_H__
#define  __ROTATION_TOOL_H__
#include "stm32f4xx_hal.h"

#define FLOAT float

/**
 * test include library for compiler.
 */
void modified_char(char *data,int size);

/**
 * Global Data struct
 */

struct EKFState{
	FLOAT x[15];
	FLOAT P[15*15];

	FLOAT K[15*15];
	FLOAT H[15*15];
	FLOAT Z[15];
};



#endif
