#include "../include/Matrix.h"

// Allocate memory for a matrix, don't fill it with any data
void allocateMatrix( Matrix &m, int columns, int rows ) {
    m = ( float** )malloc( sizeof(float*) * rows );
    for ( int i = 0; i < columns; i++ )
        m[i] = ( float* )malloc( sizeof(float) * columns );
}
// instantiate matrix from vector
void allocateMatrix( std::vector< std::vector<float> > matrix, Matrix& m) {
    m = ( float** )malloc( sizeof(float*) * matrix.size());
    for ( unsigned int i = 0; i < matrix.size(); i++ ) {
        m[i] = matrix[i].data();
    }
}
