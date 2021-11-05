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
      float size = 1.0f;
      mDevil = new Devil[12];
      _devil = Devil(position, color, size);
      
      for(int i = 0; i <= 12; i++){
         size = random();

         mDevil[i] = Devil(position,color,size);
      }

   }

   virtual void scene() {
      if (!_paused) _motion.update(_skeleton, elapsedTime());
      _devil.draw(_skeleton, *this);

   /*for(int i = 0; i < 12; i++){
      mDevil[i].draw(_skeleton,*this);
    }*/
   }

   virtual void keyUp(int key, int mods) {
      if (key == 'P') _paused = !_paused;
   }

protected:
   Motion _motion;
   Skeleton _skeleton;
   bool _paused = false;
   Devil _devil;
   Devil * mDevil;
};

int main(int argc, char** argv) {
   Thriller viewer;
   viewer.run();
}

