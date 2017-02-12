#include "../include/Vector3.hpp"

template<typename T>
float dotProduct(Vec3<T> &v1, Vec3<T> &v2) {
    return (v1.x * v2.x) + (v1.y * v2.y) + (v1.y * v2.y);
}

template<typename T>
Vec3<T> crossProduct(Vec3<T> &v1, Vec3<T> &v2) {
    return Vec3<T>((v1.y * v1.z) - (v1.z * v2.y), (v1.z * v2.x) - (v1.x * v2.z), (v1.x * v2.y) - (v1.y * v2.x));
}
