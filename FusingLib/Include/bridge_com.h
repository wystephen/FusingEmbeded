/*
 * bridge_com.h
 *
 *  Created on: Dec 21, 2018
 *      Author: steve
 */

#ifndef INCLUDE_BRIDGE_COM_H_
#define INCLUDE_BRIDGE_COM_H_

#include "TestCCPP.h"

extern "c"{
	void set_char(char *a){
		TestCCPP tckp();
		for(int i=0;i<100;++i){
			a[i] = tckp.test_char[i];
		}
	}
}


#endif /* INCLUDE_BRIDGE_COM_H_ */
