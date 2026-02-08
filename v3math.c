#include "v3math.h"

void v3_add(float *dst, float *a, float *b)
{
	dst[0] = a[0] + b[0];
	dst[1] = a[1] + b[1];
	dst[2] = a[2] + b[2];
}

// form v3 from a to b
void v3_from_points(float *dst, float *a, float *b){

    dst[0] = (b[0] - a[0]);
    dst[1] = (b[1] - a[1]);
    dst[2] = (b[2] - a[2]);

	
}
void v3_subtract(float *dst, float *a, float *b){
	
	dst[0] = a[0] - b[0];
	dst[1] = a[1] - b[1];
	dst[2] = a[2] - b[2];
	
}

float v3_dot_product(float *a, float *b){
	
	// a_vector * b_vector = [ax ay az] * [bx by bz] = ax*bx + ay*by + az*bz
	return (a[0] * b[0]) + (a[1] * b[1]) + (a[2] * b[2]);
}
void v3_cross_product(float *dst, float *a, float *b){
	dst[0] = a[1]*b[2] - a[2]*b[1];
	dst[1] = a[2]*b[0] - a[0]*b[2];
	dst[2] = a[0]*b[1] - a[1]*b[0];
}
void v3_scale(float *dst, float s){

    dst[0] *= s;
    dst[1] *= s;
    dst[2] *= s;
	
}
// angle between a and b
float v3_angle(float *a, float *b){
	return acos(v3_dot_product(a, b)/ (sqrt((a[0]*a[0]) + a[1]*a[1] + a[2]*a[2]) * sqrt(b[0]*b[0] + b[1]*b[1] + b[2]*b[2])));
	
} 
// angle between a and b; no cos-1
float v3_angle_quick(float *a, float *b){
	return v3_dot_product(a, b)/ (sqrt((a[0]*a[0]) + a[1]*a[1] + a[2]*a[2]) * sqrt(b[0]*b[0] + b[1]*b[1] + b[2]*b[2]));
	
}
// reflect v across n
void v3_reflect(float *dst, float *v, float *n){
	float dot = v3_dot_product(v, n);
	float scaled_n[3] = {n[0] * 2 * dot, n[1] * 2 * dot, n[2] * 2 * dot};
	dst[0] = v[0] - scaled_n[0];
	dst[1] = v[1] - scaled_n[1];
	dst[2] = v[2] - scaled_n[2];
}
// length of a
float v3_length(float *a){
	return sqrt(a[0]*a[0] + a[1]*a[1] + a[2]*a[2]);
	
}
// normalizing the a variable
void v3_normalize(float *dst, float *a){
	float length = ve_length(a);
	if(length > 0) {
		dst[0] = a[0] / length;
		dst[1] = a[1] / length;
		dst[2] = a[2] / length;
	}
}
