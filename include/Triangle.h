#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

class Tri {
    unsigned short vertIndex[3];
    unsigned short texCoordIndex[3];
    short          dotProduct;
    float          normal;
};

#endif // TRIANGLE_H_INCLUDED
