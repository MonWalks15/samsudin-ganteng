#include "matrix.h"

Matrix newMatrix(int a, int b, int c, int d) {
    Matrix m = {a, b, c, d};
    return m;
}

void printMatrix(Matrix m) {
	printf("[%d %d]\n[%d %d]\n", m.a, m.b, m.c, m.d);
}

Matrix add(Matrix m1, Matrix m2) {
    return (Matrix){m1.a + m2.a, m1.b + m2.b, m1.c + m2.c, m1.d + m2.d};
}

Matrix subtract(Matrix m1, Matrix m2) {
    return (Matrix){m1.a - m2.a, m1.b - m2.b, m1.c - m2.c, m1.d - m2.d};
}

void transpose(Matrix *m) {
    int temp = m->b;
    m->b = m->c;
    m->c = temp;
}

int determinant(Matrix m) {
    return (m.a * m.d) - (m.b * m.c);
}

int main()
{
	Matrix m1 = newMatrix(1, 6, 3, 4);
	Matrix m2 = newMatrix(4, 4, 8, 13);
	Matrix m3 = add(m1, m2);
	Matrix m4 = subtract(m2, m1);
	int d_m4 = determinant(m4);
	transpose(&m3);
	printMatrix(m4); //matriks
	printf("%d\n", d_m4); //determinan
	return 0;
}
