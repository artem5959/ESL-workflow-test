

typedef struct vector {
    double x;
    double y;
    double z;
} VECTOR;

VECTOR vector_sum(VECTOR a, VECTOR b);// sum сумма

VECTOR vector_sub(VECTOR a, VECTOR b); // sub вычитание

double vector_dot(VECTOR a, VECTOR b); // dot скалярное произведение

VECTOR vector_cross(VECTOR a, VECTOR b); // cross векторное произведение 



