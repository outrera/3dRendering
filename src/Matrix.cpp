#include "../include/Matrix.h"
template <typedef T>
// Allocate memory for a matrix, don't fill it with any data
void allocateMatrix( Matrix &m, int columns, int rows ) {
    Matrix = ( T** )malloc( sizeof(T*) * rows );
    for ( int i = 0; i < columns; i++ )
        Matrix[i] = ( T* )malloc( sizeof(T) * columns );
}
// instantiate matrix from vector
template <typedef T>
void allocateMatrix( std::vector< std::vector<T> > matrix, Matrix& m) {
    m = matrix.data();
}
