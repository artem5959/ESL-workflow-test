

typedef struct vector {
    double x;
    double y;
    double z;
} VECTOR;

VECTOR vector_sum(VECTOR a, VECTOR b);

VECTOR vector_sub(VECTOR a, VECTOR b);

double vector_dot(VECTOR a, VECTOR b);

VECTOR vector_cross(VECTOR a, VECTOR b);
