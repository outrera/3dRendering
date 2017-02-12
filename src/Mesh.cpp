#include "../include/Mesh.h"
#include "../include/Vector3.hpp"

void Mesh::loadMesh(char* fileName) {

    // initialize storage for vertices and tex coords
    // stored in vectors to make it simpler than C style arrays
    std::vector< Vec3<float> > vertices;
    std::vector< Vec3<float> > texCoords;

    FILE * file = fopen(path, "r");

    if ( file == NULL ) // end loading if file doesn't exist
        return false;

    while ( 1 ) {
        // allocate 128 bytes to store first word of each line (yes this is a silly assumption)
        char lineHeader[128];
        //load first word of the line
        int res = fscanf(file, "%s", lineHeader);
        if ( res == EOF)
            break; // leave parser if at end of file

        // continue with parsing

        if ( strcmp( lineHeader, "v" ) == 0 ) {

            Vec3<float> vertex;
            fscanf(file, "%f %f %f\n", &vertex.point[0],
                                       &vertex.point[1],
                                       &vertex.point[2]);
            vertices.push_back(vertex);

        }
        else if ( strcmp( lineHeader, "vt" ) == 0 ) {

            Vec3<float> uv;

        }
    }

}
