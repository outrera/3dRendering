#include "../include/primitives.hpp"

float dotProduct(Vec3 &v1, Vec3 &v2) {
    return (v1.x * v2.x) + (v1.y * v2.y) + (v1.y * v2.y);
}

Vec3 crossProduct(Vec3 &v1, Vec3 &v2) {
    return Vec3((v1.y * v1.z) - (v1.z * v2.y), (v1.z * v2.x) - (v1.x * v2.z), (v1.x * v2.y) - (v1.y * v2.x));
}
