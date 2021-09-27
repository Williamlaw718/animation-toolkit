#include "atkui/framework.h"
using namespace glm;

class Unique : public atkui::Framework {
 public:
  Unique() : atkui::Framework(atkui::Orthographic) {
  }

  void setup() {
    currentPosition3 = vec3(0);
    j = 0;
  }

  void scene() {
   if(keyIsDown(GLFW_KEY_SPACE) == true){
         setColor(agl::randomUnitVector());
         currentPosition = CD(j) * cos(elapsedTime());
         currentPosition2 = CD(j + 1.25) * cos(elapsedTime());
         currentPosition3 = CD(j + .50) * cos(elapsedTime());
         currentPosition4 = CD(j + 1) * cos(elapsedTime());
         drawSphere(currentPosition,100);
         drawSphere(currentPosition2,100);
         drawSphere(currentPosition3,100);
         drawSphere(currentPosition4,100);
         j = j + step;

   }
  }

  vec3 CD(float t){
      //return (B0 * (1.0f - t) + B1 + t ) + (B1 * (1.0f - t) + B2 + t ) + (B2 * (1.0f - t) + B3 + t );
      B10 = B0 * (1 - t) + B1 * t;
      B11 = B1 * (1-t) + B2 * t;
      B12 = B2 * (1-t) + B3 * t;
      B20 = B10 * (1-t) + B11 * t;
      B21 = B11 * (1-t) + B12 * t;
      B30 = B20 * (1-t) + B21 * t;
      return B30;
    }


  struct Particle{
      vec3 position;
      vec3 vel;
      vec3 color;
    };

  private:
  vec3 value;
  vec3 currentPosition;
  vec3 currentPosition2;
  vec3 currentPosition3;
  vec3 currentPosition4;
  vec3 B0 = vec3(100,  50, 0);
  vec3 B1 = vec3(150, 200, 0);
  vec3 B2 = vec3(250, 100, 0);
  vec3 B3 = vec3(300, 300, 0);
  vec3 B10;
  vec3 B11;
  vec3 B12;
  vec3 B20;
  vec3 B21;
  vec3 B30;
  float step = 1.0f/40.0f;
  vec3 vel;
  float i;
  int j;
  Particle * mParticles;
};

int main(int argc, char** argv) {
  Unique viewer;
  viewer.run();
}
