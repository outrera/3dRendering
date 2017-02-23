#ifndef MESH_H_INCLUDED
#define MESH_H_INCLUDED
#include <vector>
#include <stdio.h>
#include <string.h>

template <typename T> class Vec3;
class Tri;

class Mesh {
public:
    Vec3<float>* vertices;
    Vec3<float>* texCoords;
    Tri*         triangles;

    bool loadMesh(char* fileName);
};

#endif // MESH_H_INCLUDED
