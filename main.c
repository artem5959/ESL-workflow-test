#include <stdio.h>
#include "vectorfuncs.h"

int main(void)
{
    VECTOR a = {0, 0, 0};
    VECTOR b = {0, 0, 0};
    printf("Введите координаты x y z через пробел для первого вектора\n");
    scanf("%lf %lf %lf", &a.x, &a.y, &a.z);
    printf("Введите координаты x y z через пробел для второго вектора\n");
    scanf("%lf %lf %lf", &b.x, &b.y, &b.z);

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