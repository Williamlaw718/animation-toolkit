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
	axis[1] = mY/(sin(angleRad/2));
	axis[2] = mZ/(sin(angleRad/2));
	
}

void Quaternion::fromAxisAngle (const Vector3& axis, double angleRad)
{
	// TODO
	double angleDegree = angleRad * (M_PI/180);
	mX = sin(angleRad/2) * axis[0];
	mY = sin(angleRad/2) * axis[1];
	mZ = sin(angleRad/2) * axis[2];
	mW = cos(angleRad/2);
}

Matrix3 Quaternion::toMatrix () const
{
	// TODO
	Matrix3 m = Matrix3();
	m[1][1] = 1 - 2 * (pow(mY,2) + pow(mZ,2));
	m[1][2] = 2 * ((mX * mY) - (mW * mZ));
	m[1][3] = 2 * ((mX * mZ) + (mW * mY));
	m[2][1] = 2 * ((mX * mZ) + (mW * mY));
	m[2][2] = 1 - 2 * (pow(mX,2) + pow(mZ,2));
	m[2][3] = 2 * ((mY * mZ) - (mW * mX));
	m[3][1] = 2 * ((mX * mZ) - (mW * mY));
	m[3][2] = 2 * ((mY * mZ) + (mW * mX));
	m[3][3] = 1 - 2 * (pow(mY,2) + pow(mX,2));
	return m;
}

void Quaternion::fromMatrix(const Matrix3& rot)
{
	// TODO
	mW = pow((.25 * (rot[1][1] + rot[2][2] + rot[3][3] +1)),1/2);
	mX = pow((.25 * (rot[1][1] - rot[2][2] - rot[3][3] +1)),1/2);
	mY = pow((.25 * (1 - rot[1][1] + rot[2][2] - rot[3][3])),1/2);
	mZ = pow((.25 * (1 - rot[1][1] - rot[2][2] + rot[3][3])),1/2);
	
}

}