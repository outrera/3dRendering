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
    // put a one in Point[2] to make it a two dimensional point
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

    // OPERATORS

    // assignment operator
    Vec3 operator = (Vec3 v) {
        point[0] = v.point[0];
        point[1] = v.point[1];
        point[2] = v.point[2];
    }

    // comparison operators
    bool operator == (Vec3 v) {
        if (point[0] == v.point[0] &&
            point[1] == v.point[1] &&
            point[2] == v.point[2]){return true;}
        return false;
    }

    bool operator != (Vec3 v) {
        return !(this == v);
    }

    // basic arithmetic
    Vec3 operator + (Vec3 v) {
        Vec3 newVec;
        newVec.point[0] = v.point[0] + point[0];
        newVec.point[1] = v.point[1] + point[1];
        newVec.point[2] = v.point[2] + point[2];
        return newVec;
    }
    Vec3 operator - (Vec3 v) {
        Vec3 newVec;
        newVec.point[0] = point[0] - v.point[0];
        newVec.point[1] = point[1] - v.point[1];
        newVec.point[2] = point[2] - v.point[2];
        return newVec;
    }
    Vec3 operator * (Vec3 v) {
        Vec3 newVec;
        newVec.point[0] = point[0] * v.point[0];
        newVec.point[1] = point[1] * v.point[1];
        newVec.point[2] = point[2] * v.point[2];
        return newVec;
    }
    Vec3 operator / (Vec3 v) {
        Vec3 newVec;
        newVec.point[0] = point[0] / v.point[0];
        newVec.point[1] = point[1] / v.point[1];
        newVec.point[2] = point[2] / v.point[2];
        return newVec;
    }

    //scalar math
    Vec3 operator * (T scalar) {
        Vec3 newVec;
        newVec.point[0] = point[0] * scalar;
        newVec.point[1] = point[1] * scalar;
        newVec.point[2] = point[2] * scalar;
        return newVec;
    }
    Vec3 operator / (T scalar) {
        Vec3 newVec;
        newVec.point[0] = point[0] / scalar;
        newVec.point[1] = point[1] / scalar;
        newVec.point[2] = point[2] / scalar;
        return newVec;
    }

    // ease of use operators
    void operator += (Vec3 v) {
        this = this + v;
    }
    void operator -= (Vec3 v) {
        this = this - v;
    }
    void operator *= (Vec3 v) {
        this = this * v;
    }
    void operator /= (Vec3 v) {
        this = this / v;
    }
    void operator *= (T scalar) {
        this = this * scalar;
    }
    void operator /= (T scalar) {
        this = this / scalar;
    }

};

template<typename T>
float dotProduct(Vec3<T> &v1, Vec3<T> &v2);
template<typename T>
Vec3<T> crossProduct(Vec3<T> &v1, Vec3<T> &v2);

#endif // PRIMITIVES_HPP_INCLUDED
