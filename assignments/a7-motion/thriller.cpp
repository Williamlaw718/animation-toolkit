#include <random>
#include <functional>
#include "atkui/framework.h"
#include "atk/toolkit.h"
#include "agl/renderer.h"
#include "devil.h"

using namespace atk;
using namespace glm;

class Thriller : public atkui::Framework
{
public:
   Thriller() : atkui::Framework(atkui::Perspective) {}
   virtual ~Thriller() {}

   virtual void setup() {
      BVHReader reader;
      reader.load("../motions/Warrok/WarrokThriller.bvh", _skeleton, _motion);

      vec3 position = vec3(0);
      vec3 color = vec3(1,0,0);
      float x = 0;
      float y = 0;
      float z = 0;
      float size = 1.0f;
      //Devil mDevil[12];
      //_devil = Devil(position, color, size);
      
      for(int i = 0; i < 12; i++){
         //size = random();

         mDevil[i] = Devil(vec3(rand() % 500,0,0), vec3(rand() % 255,rand() % 255,rand() % 255),rand() % 5);
      }

      //mDevil[0] = Devil(vec3(1,0,0),vec3(1,0,1),size);

   }

   virtual void scene() {
   if (!_paused) _motion.update(_skeleton, elapsedTime());
      //_devil.draw(_skeleton, *this);
      //mDevil[0].draw(_skeleton,*this);
   for(int i = 0; i < 12; i++){
      mDevil[i].draw(_skeleton,*this);
    }
   }

   virtual void keyUp(int key, int mods) {
      if (key == 'P') _paused = !_paused;
   }

protected:
   Motion _motion;
   Skeleton _skeleton;
   bool _paused = false;
   Devil _devil;
   Devil mDevil[12];
};

int main(int argc, char** argv) {
   Thriller viewer;
   viewer.run();
}

