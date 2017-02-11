#ifndef PRIMITIVES_HPP_INCLUDED
#define PRIMITIVES_HPP_INCLUDED

template <typename T>
class Vec3 {

    // we make the z coordinate one for two dimensional shapes simply because this
    // allows them to be rendered on the near clipping plane so we can use 2d
    // planes as screen elements rather than world elements

    T point[3];
    T* x = &point[0], y = &point[1] ,z = &point[2];

    // CONSTRUCTORS
    Vec3(T x, T y, T z) {
        point[0] = x;
        point[1] = y;
        point[2] = z;
    }
    Vec3(T Point[3]) {
        point[0] = Point[0];
        point[1] = Point[1];
        point[2] = Point[2];
    }
    Vec3(T x, T y) {
        point[0] = x;
        point[1] = y;
        point[2] = 1;
    }
    Vec3(T Point[2]) {
        point[0] = Point[0];
        point[1] = Point[1];
        point[2] = 1;       // This is what allows us to have 2d coordinates render
                            // on the near clipping plane
    }

    // OPERATORS

    // assignment operator
    friend Vec3 operator = (Vec3 v) {
        point[0] = v.point[0];
        point[1] = v.point[1];
        point[2] = v.point[2];
    }

    // comparison operators
    friend Vec3 operator == (Vec3 v) {
        if (point[0] == v.point[0] &&
            point[1] == v.point[1] &&
            point[2] == v.point[2]){return true;}
        return false;
    }

    friend Vec3 operator != (Vec3 v) {
        return !(this == v);
    }

    // basic arithmetic
    friend Vec3 operator + (Vec3 v) {
        Vec3 newVec;
        newVec.x = v.x + x;
        newVec.y = v.y + y;
        newVec.z = v.z + z;
        return newVec;
    }
    friend Vec3 operator - (Vec3 v) {
        Vec3 newVec;
        newVec.x = x - v.x;
        newVec.y = y - v.y;
        newVec.z = z - v.z;
        return newVec
    }
    friend Vec3 operator * (Vec3 v) {
        Vec3 newVec;
        newVec.x = x * v.x;
        newVec.y = y * v.y;
        newVec.z = z * v.z;
        return newVec;
    }
    friend Vec3 operator / (Vec3 v) {
        Vec3 newVec;
        newVec.x = x / v.x;
        newVec.y = y / v.y;
        newVec.z = z / v.z;
        return newVec;
    }

    //scalar math
    friend Vec3 operator * (T scalar) {
        Vec3 newVec;
        newVec.x = x * scalar;
        newVec.y = y * scalar;
        newVec.z = z * scalar;
        return newVec;
    }
    friend Vec3 operator / (T scalar) {
        Vec3 newVec;
        newVec.x = x / scalar;
        newVec.y = y / scalar;
        newVec.z = z / scalar;
        return newVec;
    }

    // ease of use operators
    friend Vec3 operator += (Vec3 v) {
        this = this + v;
    }
    friend Vec3 operator -= (Vec3 v) {
        this = this - v;
    }
    friend Vec3 operator *= (Vec3 v) {
        this = this * v;
    }
    friend Vec3 operator /= (Vec3 v) {
        this = this / v;
    }
    friend Vec3 operator *= (T scalar) {
        this = this * scalar;
    }
    friend Vec3 operator /= (T scalar) {
        this = this / scalar;
    }

};

float dotProduct(Vec3 &v1, Vec3 &v2);
Vec3 crossProduct(Vec3 &v1, Vec3 &v2);

#endif // PRIMITIVES_HPP_INCLUDED
