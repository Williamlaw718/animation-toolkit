#include "ik_controller.h"
#include <cmath>
#include <iostream>

using namespace atk;
using namespace glm;
using namespace std;

bool IKController::solveIKAnalytic(Skeleton& skeleton, 
    int jointid, const vec3& goalPos, float epsilon) {
  if (jointid == -1) return true;

  Joint* ankle = skeleton.getByID(jointid);
  if (!ankle->getParent()) {
    std::cout << "Warning: solveIKAnalytic() needs joint "
      "with parent and grandparent\n";
    return false;
  }

  Joint* knee = ankle->getParent();
  if (!knee->getParent()) {
    std::cout << "Warning: solveIKAnalytic() needs joint "
      "with parent and grandparent\n";
    return false;
  }

  Joint* hip = knee->getParent();

  // TODO: Your code here
  return true;
}

bool IKController::solveIKCCD(Skeleton& skeleton, int jointid, 
    const vec3& goalPos, const std::vector<Joint*>& chain, 
    float threshold, int maxIters, float nudgeFactor) {
  // There are no joints in the IK chain for manipulation
  if (chain.size() == 0) return true;
  vec3 p = skeleton.getByID(jointid)->getGlobalTranslation();
  //float length = sqrt((diff[0] * diff[0]) + (diff[1] * diff[1]) + (diff[2] * diff[2]));
  // TODO: Your code here
  vec3 diff = goalPos - skeleton.getByID(jointid)->getGlobalTranslation();
  float length = sqrt((diff[0] * diff[0]) + (diff[1] * diff[1]) + (diff[2] * diff[2]));
  while (sqrt(((goalPos[0]-p[0]) * (goalPos[0] - p[0])) + ((goalPos[1] - p[1]) * (goalPos[1] - p[1])) + ((goalPos[2] - p[2]) * (goalPos[2] - p[2]))) < threshold) {
      for (int i = jointid; i > 0; i--) {


      }
  }
  //vec3 p = 
  //skeleton.getByID(jointid);
  return false;
}
