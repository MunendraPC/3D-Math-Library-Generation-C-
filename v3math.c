

void v3_add(float *dst, float *a, float *b)
{
	dst[0] = a[0] + b[0];
	dst[1] = a[1] + b[1];
	dst[2] = a[2] + b[2];
	
	
}

void v3_from_points(float *dst, float *a, float *b){
	
} // form v3 from a to b
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
	
	
}
void v3_scale(float *dst, float s){
	
	
}
float v3_angle(float *a, float *b){
	
	
} // angle between a and b
float v3_angle_quick(float *a, float *b){
	
	
} // angle between a and b; no cos-1
void v3_reflect(float *dst, float *v, float *n){
	
	
}
float v3_length(float *a){
	
	
}
void v3_normalize(float *dst, float *a){
	
	
}