#include <stdio.h>
#include "vector3.h"

int main(void)
{
    VECTOR a = {1.1, 2.2, 3.3};
    VECTOR b = {2.3, 3.4, 5.4};

    VECTOR sum = vector_sum(a, b);

    printf("Sum: %.2f %.2f %.2f\n", sum.x, sum.y, sum.z);

    VECTOR sub = vector_sub(a, b);
    printf("Sub: %.2f %.2f %.2f\n", sub.x, sub.y, sub.z);

    double dot = vector_dot(a, b);
    printf("Dot: %.2f\n", dot);

    VECTOR cross = vector_cross(a, b);
    printf("Cross: %.2f %.2f %.2f\n", cross.x, cross.y, cross.z);
    
    return 0;
}