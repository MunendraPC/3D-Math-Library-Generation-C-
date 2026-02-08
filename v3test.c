void tes_v3_add()
{
	float r[] = {0.0, 0.0, 0.0};
	float w[] = {1.0, 0.0, 0.0};
	float v[] = {1.0, 0.0, 0.0};
	
	v3_add(r, w, v);
	// compare output for what's expected

    printf("v3_add result: (%f, %f, %f)\n", r[0], r[1], r[2]);
	
}

void tes_v3_sub()
{
	float v[] = {1.0, 0.0, 0.0};
	float w[] = {1.0, 0.0, 0.0};
	float r[] = {0.0, 0.0, 0.0};
	
	v3_subtract(r, w, v);
	// compare output for what's expected

    printf("v3_subtract result: (%f, %f, %f)\n", r[0], r[1], r[2]);
	
}

void tes_v3_dotProd()
{
    float v[] = {1.0, 0.0, 0.0};
    float w[] = {1.0, 0.0, 0.0};
    float result = v3_dot_product(v, w);

    // compare result for what's expected
    printf("v3_dot_product result: (%f)\n", result);

}

void tes_v3_scale()
{
    float v[] = {1.0, 0.0, 0.0};
    float scaler = 2.0;

    v3_scale(v, scaler);

    // compare output for what's expected
    printf("v3_scale output: (%f, %f, %f)\n", v[0], v[1], v[2]);


}
