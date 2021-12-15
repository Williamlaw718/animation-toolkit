#include "steerable.h"
#include "behaviors.h"

using namespace glm;
using namespace atk;

float ASteerable::kVelKv = 150.0; 
float ASteerable::kOriKv = 150.0;  
float ASteerable::kOriKp = 150.0;

// Given a desired velocity, veld, and dt, compute a transform holding 
// the new orientation and change in position
//
// rotation control: tau = I * (-Kv1 * thetaDot + Kp1 * (thetaD - theta))
// translation control: f = m * Kv0 * (vd - v)
void ASteerable::senseControlAct(const vec3& veld, float dt)
{
   // Compute _vd and _thetad
	vec3 _vd;
	_vd = veld;
	float length_of_vd = sqrt((_vd[0] * _vd[0]) + (_vd[1] * _vd[1]) + (_vd[2] * _vd[2]));
	_vd = _vd / length_of_vd;
	float _thetad;
	_thetad = atan2(_vd[0],_vd[2]);
   // compute _force and _torque
	float _force;
	_force = _mass * kVelKv * (length_of_vd - _state[2]);
	float _torque;
	_torque = 1.0 * (-kOriKv * _state[3] + kOriKp * (_thetad - _state[1]))

		// find derivative

	_derivative[0];

   // update state

   // compute global position and orientation and update _characterRoot
   quat rot = glm::angleAxis(_state[ORI], vec3(0,1,0));
   vec3 localPos(0,0,_state[POS]);

   _characterRoot.setT(rot * localPos + _characterRoot.t());
   _characterRoot.setR(rot); 
}

// randomize the colors, characters, and animation times here
void ASteerable::randomizeAppearance()
{
   // to randomize the walking animations, compute different initial values 
   // for _time

   // to randomize color, call _drawer.setColor

   // to randomize shape, compute random values for _drawer.setJointRadius
   // or randomly assign different drawers to have a mix of characters
}

