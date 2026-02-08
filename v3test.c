#include "v3math.h"

void tes_v3_from_points()
{
    float a[] = {1.0, 2.0, 3.0};
    float b[] = {4.0, 5.0, 6.0};
    float dst[] = {0.0, 0.0, 0.0};

    v3_from_points(dst, a, b);
    // compare output for what's expected

    printf("v3_from_points result: (%f, %f, %f)\n", dst[0], dst[1], dst[2]);
    
}

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

void tes_v3_angle()
{
    float v[] = {1.0, 0.0, 0.0};
    float w[] = {2.0, 0.0, 0.0};
    float result = v3_angle(v, w);

    printf("v3_angle result: (%f)\n", result);

}

void tes_v3_angle_nocos()
{
    float v[] = {1.0, 0.0, 0.0};
    float w[] = {2.0, 0.0, 0.0};
    float result = v3_angle_quick(v, w);

    printf("v3_angle result: (%f)\n", result);

}

void tes_v3_length()
{
    float v[] = {3.0, 4.0, 0.0};
    float length = v3_length(v);

    // compare result for what's expected
    printf("v3_length result: (%f)\n", length);
}

void tes_v3_reflect()
{
    float v[] = {1.0, -1.0, 0.0};
    float n[] = {0.0, 1.0, 0.0};
    float r[3] = {0.0, 0.0, 0.0};

    v3_reflect(r, v, n);

    // compare output for what's expected
    printf("v3_reflect output: (%f, %f, %f)\n", r[0], r[1], r[2]);
}

void tes_v3_normalize()
{
    float v[] = {3.0, 4.0, 0.0};
    float normalized[3] = {0.0, 0.0, 0.0};

    v3_normalize(normalized, v);

    // compare output for what's expected
    printf("v3_normalize output: (%f, %f, %f)\n", normalized[0], normalized[1], normalized[2]);
}

void tes_v3_crossProd()
{
    float v[] = {1.0, 0.0, 0.0};
    float w[] = {0.0, 1.0, 0.0};
    float result[3] = {0.0, 0.0, 0.0};

    v3_cross_product(result, v, w);

    // compare output for what's expected
    printf("v3_cross_product output: (%f, %f, %f)\n", result[0], result[1], result[2]);
}

int main()
{
    tes_v3_from_points();
    tes_v3_add();
    tes_v3_sub();
    tes_v3_dotProd();
    tes_v3_crossProd();
    tes_v3_scale();
    tes_v3_angle();
    tes_v3_angle_nocos();
    tes_v3_reflect();
    tes_v3_length();
    tes_v3_normalize();

    return 0;
}