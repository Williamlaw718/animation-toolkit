#include "atkmath/quaternion.h"
#include "atkmath/matrix3.h"
#include "atkmath/vector3.h"

namespace atkmath {

Quaternion Quaternion::Slerp(const Quaternion& q0, const Quaternion& q1, double t)
{
	// TODO
	return Quaternion(1,0,0,0);
}

void Quaternion::toAxisAngle (Vector3& axis, double& angleRad) const
{
	// TODO
	axis[0] = mX/(sin(angleRad/2));
	axis[1] = mY/(sin(angleRad/2));;
	axis[2] = mZ/(sin(angleRad/2));;
	
}

void Quaternion::fromAxisAngle (const Vector3& axis, double angleRad)
{
	// TODO
	mX = sin(angleRad/2) * axis[0];
	mY = sin(angleRad/2) * axis[1];
	mZ = sin(angleRad/2) * axis[2];
	mW = cos(angleRad/2);
}

Matrix3 Quaternion::toMatrix () const
{
	// TODO
	
	return Matrix3::Identity;
}

void Quaternion::fromMatrix(Matrix3& rot)
{
	// TODO
	rot.m11 = 1 - 2 * ((mY * mY) + (mZ*mZ));
	rot.m12 = 2 * (mX * mY - mW * mZ);
	rot.m13 = 2 * (mX * mZ + mW * mY);
	rot.m21 = 2 * (mX * mZ + mW * mY);
	rot.m22 = 1 - 2 * ((mX * mX) + (mZ*mZ));
	rot.m23 = 2 * (mY * mZ - mW * mX);
	rot.m31 = 2 * (mX * mZ - mW * mY);
	rot.m32 = 2 * (mY * mZ + mW * mX);
	rot.m33 = 1 - 2 * ((mY * mY) + (mX*mX));
}

}