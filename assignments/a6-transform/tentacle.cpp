#include "atkui/framework.h"
#include "atk/toolkit.h"
using namespace atk;
using glm::vec3;

class Tentacle : public atkui::Framework {
public:
   Tentacle() : atkui::Framework(atkui::Perspective) {}
   virtual ~Tentacle() {}

   virtual void setup() {
      lookAt(vec3(200), vec3(0));

      Joint* root  = new Joint("root");
      root->setLocalTranslation(vec3(0,0,0));
      _tentacle.addJoint(root);

      Joint* joint1  = new Joint("joint1");
      joint1->setLocalTranslation(vec3(0,50,0));
      _tentacle.addJoint(joint1, root);

      Joint* joint2  = new Joint("joint2");
      joint2->setLocalTranslation(vec3(0,50,0));
      _tentacle.addJoint(joint2, joint1);

      Joint* joint3  = new Joint("joint3");
      joint3->setLocalTranslation(vec3(0,50,0));
      _tentacle.addJoint(joint3, joint2);

      Joint* joint4  = new Joint("joint4");
      joint4->setLocalTranslation(vec3(0,50,0));
      _tentacle.addJoint(joint4, joint3);

      Joint* joint5  = new Joint("joint5");
      joint5->setLocalTranslation(vec3(0,50,0));
      _tentacle.addJoint(joint5, joint4);

      // todo: add more joints
      _tentacle.fk(); // compute local2global transforms
   }

   virtual void scene()
   {
      // todo animate joints
      // hint: use glm::angleAxis(...) to compute quaternions for each joint
      _tentacle.fk(); // computes local2global transforms
      _tentacle.getByID(0)->setLocalRotation(glm::angleAxis(sin(1.5708f), vec3(0,0,1)));
      _tentacle.getByID(1)->setLocalRotation(glm::angleAxis(sin(1.5708f), vec3(0,0,1)));
      _tentacle.getByID(2)->setLocalRotation(glm::angleAxis(sin(1.5708f), vec3(0,0,1)));
      _tentacle.getByID(3)->setLocalRotation(glm::angleAxis(sin(1.5708f), vec3(0,0,1)));
      _tentacle.getByID(4)->setLocalRotation(glm::angleAxis(sin(1.5708f), vec3(0,0,1)));
      _tentacle.getByID(5)->setLocalRotation(glm::angleAxis(sin(1.5708f), vec3(0,0,1)));
      setColor(vec3(0,1,0));

      // todo: loop over all joints and draw
      for(int i = 0; i < _tentacle.getNumJoints(); i++){
         int j = 1;
         if (_tentacle.getByID(i)->getName() == _tentacle.getRoot()->getName())
         {
            continue;
         }
         Joint* parent = _tentacle.getByID(i);
         Joint* child = _tentacle.getByID(j);
         vec3 globalParentPos = parent->getGlobalTranslation();
         vec3 globalPos = child->getGlobalTranslation();
         drawEllipsoid(globalParentPos, globalPos, 5);
         j++;
         
      }
   }

protected:
   Skeleton _tentacle;
};

int main(int argc, char** argv)
{
   Tentacle viewer;
   viewer.run();
} 

