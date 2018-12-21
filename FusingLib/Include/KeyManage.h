#ifndef INCLUDE_KEY_MANAGE_H_
#define INCLUDE_KEY_MANAGE_H_
//static uint32_t CpuID[3];
#include "stm32f4xx_hal.h"

void Get_ID(uint32_t *id_array);
//	id_array[0] = *(uint32_t*) (0x1fff7a10);
//	id_array[1] = *(uint32_t*) (0x1fff7a14);
//	id_array[2] = *(uint32_t*) (0x1fff7a18);
//
//}

#endif
