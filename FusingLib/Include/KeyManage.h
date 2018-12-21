#ifndef INCLUDE_KEY_MANAGE_H_
#define INCLUDE_KEY_MANAGE_H_
//static uint32_t CpuID[3];
#include "stm32f4xx_hal.h"

/**
 * Get cpu id.
 * @param id_array uint32_t[3];
 */
void Get_ID(uint32_t *id_array);
//	id_array[0] = *(uint32_t*) (0x1fff7a10);
//	id_array[1] = *(uint32_t*) (0x1fff7a14);
//	id_array[2] = *(uint32_t*) (0x1fff7a18);
//
//}
/**
 * code array should be uint8_t[16]
 */
void md5(uint8_t *initial_msg, size_t initial_len, uint8_t *code_array) ;


#endif
