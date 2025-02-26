#ifndef MATRIX_H
#define MATRIX_H
#include <stdio.h>

typedef struct {
	int a,b;
	int c,d;
} Matrix;

Matrix newMatrix(int a, int b, int c, int d); 

void printMatrix(Matrix m);

Matrix add(Matrix m1, Matrix m2);

Matrix subtract(Matrix m1, Matrix m2);

void transpose(Matrix *m);

int determinant(Matrix m);

#endif 
