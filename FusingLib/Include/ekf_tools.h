/*
 * ekf_tools.h
 *
 *  Created on: Dec 9, 2018
 *      Author: steve
 */

#ifndef INCLUDE_EKF_TOOLS_H_
#define INCLUDE_EKF_TOOLS_H_

#include "matrix_tools.h"
#include "rotation_tool.h"

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




#endif /* INCLUDE_EKF_TOOLS_H_ */
