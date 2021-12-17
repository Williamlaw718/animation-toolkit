#include "atkmath/quaternion.h"
#include "atkmath/matrix3.h"
#include "atkmath/vector3.h"

namespace atkmath {


double x;
Quaternion q = Quaternion();
Quaternion Quaternion::Slerp(const Quaternion& q0, const Quaternion& q1, double t)
{
	// TODO
	double theta;
	
	if(acos(q1[3]) != 0){
		theta = acos(q1[3]);
	} else if (acos(q0[3]) != 0)
	{
		theta = acos(q0[3]);
	}
	
	if(sin(theta) == 0){
		return q0;
	}else{
		q = (q0 * (sin(theta * (1-t))/sin(theta))) + (((sin(theta * t))/sin(theta)) * q1);
	}

	return q;
}

void Quaternion::toAxisAngle (Vector3& axis, double& angleRad) const
{
	// TODO
	angleRad = 2 * acos(mW);
	axis[0] = mX/(sin(angleRad/2));
	axis[1] = mY/(sin(angleRad/2));
	axis[2] = mZ/(sin(angleRad/2));
	if(angleRad == 0){
		axis = Vector3(1,0,0);
	}
}

void Quaternion::fromAxisAngle (const Vector3& axis, double angleRad)
{
	// TODO
	//double angleDegree = angleRad * (M_PI/180);
	mX = sin(angleRad/2) * axis[0];
	mY = sin(angleRad/2) * axis[1];
	mZ = sin(angleRad/2) * axis[2];
	mW = cos(angleRad/2);
}

Matrix3 Quaternion::toMatrix () const
{
	// TODO
	//Matrix3 m = Matrix3();
	Matrix3 Nm = Matrix3();
	//Matrix3 Nm;
	Nm[0][0] = 1 - 2 * ((mY * mY) + (mZ * mZ));
	Nm[0][1] = 2 * ((mX * mY) - (mW * mZ));
	Nm[0][2] = 2 * ((mX * mZ) + (mW * mY));
	Nm[1][0] = 2 * ((mX * mY) + (mW * mZ));
	Nm[1][1] = 1 - 2 * ((mX * mX) + (mZ * mZ));
	Nm[1][2] = 2 * ((mY * mZ) - (mW * mX));
	Nm[2][0] = 2 * ((mX * mZ) - (mW * mY));
	Nm[2][1] = 2 * ((mY * mZ) + (mW * mX));
	Nm[2][2] = 1 - 2 * ((mY * mY) + (mX * mX));
	//Nm = m;
	return Nm;
	
	
}

void Quaternion::fromMatrix(const Matrix3& rot)
{
	// TODO
	double mX2 = .25 * (1 + rot[0][0] - rot[1][1] - rot[2][2]);
	double mY2 = .25 * (1 - rot[0][0] + rot[1][1] - rot[2][2]);
	double mZ2 = .25 * (1 - rot[0][0] - rot[1][1] + rot[2][2]);
	double mW2 = .25 * (1 + rot[0][0] + rot[1][1] + rot[2][2]);

	if((mX2 > mY2) && (mX2 > mW2) && (mX2 > mZ2)){
		
		mX = sqrt(mW2);
		mW = 1/(4 * mX) * (rot[2][1] - rot[1][2]);
		mY = 1/(4 * mX) * (rot[1][0] - rot[0][1]);
		mZ = 1/(4 * mX) * (rot[0][2] - rot[2][0]);
	} else if ((mY2 > mX2) && (mY2 > mW2) && (mY2 > mZ2)){
		mY = sqrt(mW2);
		mW = 1/(4 * mY) * (rot[0][2] - rot[2][1]);
		mX = 1/(4 * mY) * (rot[1][0] - rot[0][1]);
		mZ = 1/(4 * mY) * (rot[1][2] - rot[2][1]);
	} else if((mZ2 > mY2) && (mZ2 > mW2) && (mZ2 > mX2)){
		mZ = sqrt(mW2);
		mW = 1/(4 * mZ) * (rot[1][0] - rot[0][1]);
		mY = 1/(4 * mZ) * (rot[1][2] - rot[2][1]);
		mX = 1/(4 * mZ) * (rot[0][2] - rot[2][0]);

	}else{
		mW = sqrt(mW2);
		mX = 1/(4 * mW) * (rot[2][1] - rot[1][2]);
		mY = 1/(4 * mW) * (rot[0][2] - rot[2][0]);
		mZ = 1/(4 * mW) * (rot[1][0] - rot[0][1]);
	}
	
}

}