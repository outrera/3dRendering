#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include <stdlib.h>
#include <vector>

typedef float** Matrix;

void allocateMatrix( Matrix &m, int columns, int rows );

#endif // MATRIX_H_INCLUDED
