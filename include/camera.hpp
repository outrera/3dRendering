#ifndef CAMERA_HPP_INCLUDED
#define CAMERA_HPP_INCLUDED

class Frustum;

class Camera {
private:
    Vec3<float> centerOfProjection;
    Vec3<float> opticalAxisVector;
    Vec3<float> principalPoint;
    Frustum    viewingFrustum;
    float       focalLength;
    float       hFov;
    float       vFov;
    float       maxViewDist;

public:
    float       hRotation;
    float       vRotation;

    Camera(Vec3<float> position, float hRotation, float vRotation, float focalLength,
           float viewDist);

    void updatePosition(Vec3<float> position);
};

#endif // CAMERA_HPP_INCLUDED
