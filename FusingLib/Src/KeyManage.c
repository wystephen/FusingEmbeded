/*
 * KeyManage.c
 *
 *  Created on: Dec 21, 2018
 *      Author: steve
 */

#include "KeyManage.h"

void Get_ID(uint32_t *id_array) {
	id_array[0] = *(uint32_t*) (0x1fff7a10);
	id_array[1] = *(uint32_t*) (0x1fff7a14);
	id_array[2] = *(uint32_t*) (0x1fff7a18);

}
