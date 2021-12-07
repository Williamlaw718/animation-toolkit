#include "atk/toolkit.h"
#include "atkui/framework.h"
#include "cyclops.h"
#include <algorithm>
#include <string>

using namespace atk;
using namespace glm;
using namespace std;

class ALooker : public atkui::Framework {
public:
   ALooker() : atkui::Framework(atkui::Perspective) {}
   virtual ~ALooker() {}

   void setup() {
      Motion motion;
      BVHReader reader;
      reader.load("../motions/Beta/idle.bvh", _skeleton, motion);
      motion.update(_skeleton, 0);

      _drawer.color = vec3(1,0,0);
      _head = _skeleton.getByName("Beta:Head");
   }

   void reset(Joint* head) {
      head->setLocalRotation(IdentityQ);
      head->fk();
   }

   void lookAtTarget(Joint* head, const vec3& target) {
      // TODO: Your code here
      
       vec3 Z = target - head->getGlobalTranslation();
       float length_of_z = sqrt((Z[0] * Z[0]) + (Z[1] * Z[1]) + (Z[2] * Z[2]));
       //vec3 Z2 = vec3(Z[0] / length_of_z, Z[1] / length_of_z, Z[2] / length_of_z);
       //vec3 Z2 = glm::compNormalize(Z);
       vec3 X = vec3(0, 1, 0) * Z;
       vec3 Y = X * Z;
       float length_of_y = sqrt((Y[0] * Y[0]) + (Y[1] * Y[1]) + (X[2] * X[2]));
       float length_of_x = sqrt((X[0] * X[0]) + (X[1] * X[1]) + (X[2] * X[2]));;
       //head->setLocalRotation();
       mat3 m = mat3x3(X/length_of_x, Y/length_of_y, Z/length_of_z);
       quat q = glm::toQuat(m);
       //quat q = glm::angleAxis();
       head->setLocalRotation(q);
       head->fk();
   }

   void scene() {  
      float r = 100;
      float angle = elapsedTime();
      _target = vec3(r * cos(angle), r * sin(angle) + r, 150);

      reset(_head);
      lookAtTarget(_head, _target);
      _drawer.draw(_skeleton, *this);

      vec3 globalHeadPos = _head->getGlobalTranslation();
      vec3 globalForward = _head->getGlobalRotation() * vec3(0,0,1);

      setColor(vec3(0,0,1));
      drawLine(globalHeadPos, globalHeadPos + 200.0f*globalForward);
      drawSphere(_target, 5);
   }

   Cyclops _drawer;
   Skeleton _skeleton;
   Joint* _head;
   vec3 _target;
};

int main(int argc, char** argv) {
   ALooker viewer;
   viewer.run();
   return 0;
}

