
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
 * struct for easy access.
 */
typedef struct {
	FLOAT x;
	FLOAT y;
	FLOAT z;
} EulerAngle_sub;

/**
 * EulerAngle struct
 */
typedef union {
	FLOAT data[3];
	EulerAngle_sub angle;
} EulerAngle;

/**
 * RotationStruct
 * TODO: maintain the three value represent same state of rotation.
 */
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
 * Left update for quaternion.
 * @param q: quaternion will be update and normalize in-place.
 * @param w:
 * @param rate: using to changing update ratio(coulb be -1.0, 1.0, time_interval.
 *
 * @return: 0-OK 1-failed
 */
int quaternion_left_update(Quaternion *q, FLOAT *w, FLOAT rate);

/**
 * Right update for quaternion 1
 * @param q: quaternion
 * @param w: euler angle or
 * @param rate:
 * @return: 0-OK 1-failed
 */
int quaternion_right_update(Quaternion *q, FLOAT *w, FLOAT rate);


/**
 *
 * @return: 0-OK 1-failed
 */
int euler2R(EulerAngle* angle,RotationMatrix* R);


/**
 * rotation matrix to quaternion
 * @return: 0-OK 1-failed
 */
int dcm2q(RotationMatrix* R, Quaternion* q);


/**
 * Convert quaternion to roation matrix(which is easy to adopted in rotate some 3d vector)
 * @return: 0-OK 1-failed
 */
int q2dcm(Quaternion *q, RotationMatrix *R);


/**
 * rotation matrix to euler angle.
 * @return: 0-OK 1-failed
 */
int dcm2euler(RotationMatrix* R, EulerAngle * angle);






#endif
