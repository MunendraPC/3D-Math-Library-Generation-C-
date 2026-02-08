void tes_v3_add()
{
	float r[] = {0.0, 0.0, 0.0};
	float w[] = {1.0, 0.0, 0.0};
	float v[] = {1.0, 0.0, 0.0};
	
	v3_add(r, w, v);
	// compare output for what's expected
	
}

void tes_v3_sub()
{
	float v[] = {1.0, 0.0, 0.0};
	float w[] = {1.0, 0.0, 0.0};
	float r[] = {0.0, 0.0, 0.0};
	
	v3_subtract(r, w, v);
	// compare output for what's expected
	
}