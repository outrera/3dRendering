#ifndef MESH_H_INCLUDED
#define MESH_H_INCLUDED

class Vec3;

class Mesh {
public:
    Vec3<float>* vertices;
    Vec3<float>* texCoords;
    Tri*         triangles;

    void loadMesh(char* fileName);
};

#endif // MESH_H_INCLUDED
