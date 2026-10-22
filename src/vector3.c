#include <stdio.h>
#include "vector3.h"

VECTOR vector_sum(VECTOR a, VECTOR b) 
{
    VECTOR s;
    s.x = a.x + b.x;
    s.y = a.y + b.y;
    s.z = a.z + b.z;
    return s;
}

VECTOR vector_sub(VECTOR a, VECTOR b) 
{
    VECTOR s;
    s.x = a.x - b.x;
    s.y = a.y - b.y;
    s.z = a.z - b.z;
    return s;
}

double vector_dot(VECTOR a, VECTOR b)
{
    return (a.x * b.x + a.y * b.y + a.z * b.z);
}

VECTOR vector_cross(VECTOR a, VECTOR b)
{
    VECTOR s;
    s.z = a.x * b.y - a.y * b.x;
    s.x = a.y * b.z - a.z * b.y;
    s.y = a.z * b.x - a.x * b.z;
    return s;
}