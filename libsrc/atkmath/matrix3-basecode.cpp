#include "atkmath/matrix3.h"
#include "atkmath/quaternion.h"

namespace atkmath {

atkmath::Vector3 angleRad;

Vector3 Matrix3::toEulerAnglesXYZ() const
{
   angleRad[0] =  -atan2(m23,m33);
   angleRad[1] = asin(m13);
   angleRad[2] = -atan2(m12,m11);
   return angleRad;
}

Vector3 Matrix3::toEulerAnglesXZY() const
{
   angleRad[0] = atan2(m32,m22);
   angleRad[1] = atan2(m13,m11);
   angleRad[2] = asin(-m12);
   return angleRad;
}

Vector3 Matrix3::toEulerAnglesYXZ() const
{
   angleRad[0] = asin(-m23);
   angleRad[1] = atan2(m13,m33);
   angleRad[2] = atan2(m21,m22);
   return angleRad;
}

Vector3 Matrix3::toEulerAnglesYZX() const
{
   angleRad[0] = -atan2(m23,m22);
   angleRad[1] = -atan2(m31,m11);
   angleRad[2] = asin(m21);
   return angleRad;
}

Vector3 Matrix3::toEulerAnglesZXY() const
{

   angleRad[0] = asin(m32);
   angleRad[1] = -atan2(m31,m33);
   angleRad[2] = -atan2(m12,m22);
   return angleRad;
}

Vector3 Matrix3::toEulerAnglesZYX() const
{
   angleRad[0] = atan2(m32,m33);
   angleRad[1] = asin(-m31);
   angleRad[2] = atan2(m21,m11);
   return angleRad;
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
   axis[0] = pow(((m11-cos(angleRad))/(1-cos(angleRad))), 1/2);
   axis[1] = pow(((m22-cos(angleRad))/(1-cos(angleRad))), 1/2);;
   axis[2] = pow(((m33-cos(angleRad))/(1-cos(angleRad))), 1/2);;
}

void Matrix3::fromAxisAngle(const Vector3& axis, double angleRad)
{
   // TODO 
   *this = Identity;
   m11 = cos(angleRad) + (1 - cos(angleRad)) * (axis[0] * axis[0]);
   m12 = -sin(angleRad) * axis[2] + (1-cos(angleRad)) * axis[0] * axis[1];
   m13 = axis[1] * sin(angleRad) + axis[0] * axis[2] * (1 - cos(angleRad));
   m21 = -axis[2] * sin(angleRad) + (axis[0] * axis[1] * (1 - cos(angleRad)));
   m22 = cos(angleRad) + (1 - cos(angleRad)) * (axis[1] * axis[1]);
   m23 =  -axis[0] * sin(angleRad) + axis[1] * axis[2] * (1 - cos(angleRad));
   m31 = sin(angleRad) * axis[1] + (1-cos(angleRad)) * axis[0] * axis[1];
   m32 = -axis[0] * sin(angleRad) + (1-cos(angleRad)) * axis[1] * axis[2];
   m33 = cos(angleRad) + (1-cos(angleRad)) * (axis[2] * axis[2]);
}



}