#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

template <typedef T>
typedef T** Matrix;

void allocateMatrix( Matrix &m, int columns, int rows );

#endif // MATRIX_H_INCLUDED
