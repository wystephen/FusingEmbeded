
#ifndef __ROTATION_TOOL_H__
#define  __ROTATION_TOOL_H__
#include "matrix_tools.h"
#include "math.h"

typedef struct {
	FLOAT w;
	FLOAT x;
	FLOAT y;
	FLOAT z;
} Quaternion_sub;

/**
 * Quaternion struct
 */
typedef union {
	FLOAT data[4];
	Quaternion_sub q;
} Quaternion;

/**
 * Rotation Matrix struct
 */
typedef struct {
	FLOAT data[9];
} RotationMatrix;

/**
 * struct for
 */
typedef struct {
	FLOAT x;
	FLOAT y;
	FLOAT z;
} EulerAngle_sub;

typedef union {
	FLOAT data[3];
	EulerAngle_sub angle;
} EulerAngle;

typedef struct  {
	Quaternion q;
	RotationMatrix R;
	EulerAngle angle;
}RotationStruct;

/**
 * test include library for compiler.
 */
void modified_char(char *data, int size);

/**
 * Left update of quaternion.
 * @param q: quaternion will be update and normalize in-place.
 * @param w:
 */
void quaternion_left_update(Quaternion *q, FLOAT *w, FLOAT rate);

#endif
