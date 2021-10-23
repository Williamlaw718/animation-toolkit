#include "atkmath/matrix3.h"
#include "atkmath/quaternion.h"

namespace atkmath {

float thetaX;
float thetaY;
float thetaZ;

Vector3 Matrix3::toEulerAnglesXYZ() const
{
   m11;
   return Vector3();
}

Vector3 Matrix3::toEulerAnglesXZY() const
{
   return Vector3();
}

Vector3 Matrix3::toEulerAnglesYXZ() const
{
   return Vector3();
}

Vector3 Matrix3::toEulerAnglesYZX() const
{
   return Vector3();
}

Vector3 Matrix3::toEulerAnglesZXY() const
{

   return Vector3();
}

Vector3 Matrix3::toEulerAnglesZYX() const
{
   return Vector3();
}

void Matrix3::fromEulerAnglesXYZ(const Vector3& angleRad)
{
   *this = Identity;
   m11 = cos(angleRad[1]) * cos(angleRad[2]);
   m12 = -cos(angleRad[1]) * sin(angleRad[2]);
   m13 = sin(angleRad[1]);
   m21 = (cos(angleRad[0]) * sin(angleRad[2])) + (cos(angleRad[2]) * sin(angleRad[0]) * sin(angleRad[1]));
   m22 = (cos(angleRad[0]) * cos(angleRad[2])) - (sin(angleRad[2]) * sin(angleRad[0]) * sin(angleRad[1]));
   m23 = -cos(angleRad[1]) * sin(angleRad[0]);
   m31 = (sin(angleRad[0]) * sin(angleRad[2])) - (cos(angleRad[0]) * cos(angleRad[2]) * sin(angleRad[1]));
   m32 = (cos(angleRad[2]) * sin(angleRad[0])) + (cos(angleRad[0]) * sin(angleRad[1]) * sin(angleRad[2]));
   m33 = cos(angleRad[0]) * cos(angleRad[1]);
}

void Matrix3::fromEulerAnglesXZY(const Vector3& angleRad)
{
   *this = Identity;
   m11 = cos(angleRad[2]) * cos(angleRad[1]);
   m12 = -sin(angleRad[2]);
   m13 = cos(angleRad[2]) * sin(angleRad[1]);
   m21 = (cos(angleRad[0]) * sin(angleRad[2]) * cos(angleRad[1])) + (sin(angleRad[0]) * sin(angleRad[1]));
   m22 = cos(angleRad[0]) * cos(angleRad[2]);
   m23 = (cos(angleRad[0]) * sin(angleRad[2]) * sin(angleRad[1])) - (sin(angleRad[0]) * cos(angleRad[1]));
   m31 = (sin(angleRad[0]) * sin(angleRad[2]) * cos(angleRad[1])) - (cos(angleRad[0]) * sin(angleRad[1]));
   m32 = sin(angleRad[0]) * cos(angleRad[2]);
   m33 = (sin(angleRad[0]) * sin(angleRad[2]) * sin(angleRad[1])) + (cos(angleRad[0]) * cos(angleRad[1]));
}

void Matrix3::fromEulerAnglesYXZ(const Vector3& angleRad)
{
   *this = Identity;
   m11 = cos(angleRad[1]) * cos(angleRad[2]) + (sin(angleRad[1]) * sin(angleRad[0]) * sin(angleRad[2]));
   m12 = (sin(angleRad[1]) * sin(angleRad[0]) * cos(angleRad[2])) - (cos(angleRad[1]) * sin(angleRad[2]));
   m13 = sin(angleRad[1]) * cos(angleRad[0]);
   m21 = cos(angleRad[0]) * sin(angleRad[2]);
   m22 = cos(angleRad[0]) * cos(angleRad[2]);
   m23 = -sin(angleRad[0]);
   m31 = (cos(angleRad[1]) * sin(angleRad[0]) * sin(angleRad[2])) - (cos(angleRad[2]) * sin(angleRad[1]));
   m32 = sin(angleRad[1]) * sin(angleRad[2]) + (cos(angleRad[1]) * sin(angleRad[0]) * cos(angleRad[2]));
   m33 = cos(angleRad[1]) * cos(angleRad[0]);
}

void Matrix3::fromEulerAnglesYZX(const Vector3& angleRad)
{
   *this = Identity;
    m11 = cos(angleRad[2]) * cos(angleRad[1]);
    m12 = sin(angleRad[1]) * sin(angleRad[0]) - (cos(angleRad[1]) * sin(angleRad[2]) * cos(angleRad[0]));
    m13 = (cos(angleRad[1]) * sin(angleRad[2]) * sin(angleRad[0])) + sin(angleRad[1]) * cos(angleRad[0]);
    m21 = sin(angleRad[2]);
    m22 = cos(angleRad[2]) * cos(angleRad[0]);
    m23 = -cos(angleRad[2]) * sin(angleRad[0]);
    m31 = -sin(angleRad[1]) * cos(angleRad[2]);
    m32 = (sin(angleRad[1]) * sin(angleRad[2]) * cos(angleRad[0])) + cos(angleRad[1]) * sin(angleRad[0]);
    m33 = cos(angleRad[1]) * cos(angleRad[0]) - (sin(angleRad[1]) * sin(angleRad[2]) * sin(angleRad[0]));
}

void Matrix3::fromEulerAnglesZXY(const Vector3& angleRad)
{
   *this = Identity;
   m11 = cos(angleRad[2]) * cos(angleRad[1]) - (sin(angleRad[2]) * sin(angleRad[0]) * sin(angleRad[1]));
   m12 = -sin(angleRad[2]) * cos(angleRad[0]);
   m13 = cos(angleRad[2]) * sin(angleRad[1]) + (sin(angleRad[2]) * sin(angleRad[0]) * cos(angleRad[1]));
   m21 = sin(angleRad[2]) * cos(angleRad[1]) + (cos(angleRad[2]) * sin(angleRad[0]) * sin(angleRad[1]));
   m22 = cos(angleRad[2]) * cos(angleRad[0]);
   m23 = sin(angleRad[2]) * sin(angleRad[1]) - (cos(angleRad[2]) * sin(angleRad[0]) * cos(angleRad[1]));
   m31 = -cos(angleRad[0]) * sin(angleRad[1]);
   m32 = sin(angleRad[0]);
   m33 = cos(angleRad[0]) * cos(angleRad[1]);
}

void Matrix3::fromEulerAnglesZYX(const Vector3& angleRad)
{
   *this = Identity;
   m11 = cos(angleRad[1]) * cos(angleRad[0]);
   m12 = (sin(angleRad[2]) * cos(angleRad[1]) * cos(angleRad[0])) -cos(angleRad[2]) * sin(angleRad[0]);
   m13 = (sin(angleRad[2]) * sin(angleRad[0])) + (cos(angleRad[2]) * sin(angleRad[1]) * cos(angleRad[0]));
   m21 = cos(angleRad[1]) * sin(angleRad[0]);
   m22 = (sin(angleRad[2]) * sin(angleRad[1]) * sin(angleRad[0])) + cos(angleRad[2]) * sin(angleRad[0]);
   m23 = (cos(angleRad[2]) * sin(angleRad[1]) * sin(angleRad[0])) - cos(angleRad[0]) * sin(angleRad[2]);
   m31 = -sin(angleRad[1]);
   m32 = cos(angleRad[1]) * sin(angleRad[2]);
   m33 = cos(angleRad[1]) * cos(angleRad[2]);
}

void Matrix3::toAxisAngle(Vector3& axis, double& angleRad) const
{
   // TODO
}

void Matrix3::fromAxisAngle(const Vector3& axis, double angleRad)
{
   // TODO
   *this = Identity;
   m11 = cos(angleRad) + (1 - cos(angleRad)) * (axis[0] * axis[0]);
   m12 = -sin(angleRad) * axis[2] + (1-cos(angleRad)) * axis[0] * axis[1];
   
}



}