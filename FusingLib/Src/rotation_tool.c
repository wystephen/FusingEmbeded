/*
 * rotation_tool.c
 *
 *  Created on: Dec 2, 2018
 *      Author: steve
 */
#include "rotation_tool.h"

/**
 * Just for test string operating.
 */
void modified_char(char *data,int size){
	for(int i=0;i<size;++i){
		data[i] = 'a' + i%36;
	}
}



