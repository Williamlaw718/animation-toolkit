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
	Nm[0][0] = 1.0 - 2.0 * (pow(mY, 2) + pow(mZ, 2));
	Nm[0][1] = 2.0 * ((mX * mY) - (mW * mZ));
	Nm[0][2] = 2.0 * ((mX * mZ) + (mW * mY));
	Nm[1][0] = 2.0 * ((mX * mY) + (mW * mZ));
	Nm[1][1] = 1.0 - 2.0 * (pow(mX, 2) + pow(mZ, 2));
	Nm[1][2] = 2.0 * ((mY * mZ) - (mW * mX));
	Nm[2][0] = 2.0 * ((mX * mZ) - (mW * mY));
	Nm[2][1] = 2.0 * ((mY * mZ) + (mW * mX));
	Nm[2][2] = 1.0 - 2.0 * (pow(mY, 2) + pow(mX, 2));
	//Nm = m;
	return Nm;
	
	
}

void Quaternion::fromMatrix(const Matrix3& rot)
{
	// TODO
	double T = rot[1][1] + rot[2][2] + rot[3][3];
	if(T > 0){
		double v = .5/ (sqrt(T+1));
		mW = .25/v;
		mX = (rot[3][2] - rot[2][3]) *v;
		mY = (rot[1][3] - rot[3][1]) * v;
		mZ = (rot[2][1] - rot[1][2]) * v;
	} else if ((rot[1][1] > rot[2][2]) && (rot[1][1] > rot[3][3])){
		double v = sqrt(1.0 + rot[1][1] - rot[2][2] - rot[3][3]) * 2;
		mX = .25 * v;
		mW = (rot[3][2] - rot[2][3])/v;
		mY = (rot[1][2] + rot[2][1])/v;
		mZ = (rot[1][3] + rot[3][1])/v;
	} else if(rot[2][2] > rot[3][3]){
		double v = sqrt(1.0 + rot[2][2] - rot[1][1] - rot[3][3]) * 2;
		mX = (rot[1][2] + rot[2][1])/v;
		mW = (rot[1][3] - rot[3][1])/v;
		mY = .25 * v;
		mZ = (rot[2][3] + rot[3][2])/v;

	}else{
		double v = sqrt(1.0 + rot[3][3] - rot[1][1] - rot[2][2]) * 2;
		mW = (rot[2][1] - rot[1][2])/v;
		mX = (rot[1][3] + rot[3][1])/v;
		mY = (rot[2][3] + rot[3][2])/v;
		mZ = .25 * v;
	}
	
}

}