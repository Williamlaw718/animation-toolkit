#include "atkui/framework.h"
using namespace glm;

class ParticleCubic : public atkui::Framework {
 public:
  ParticleCubic() : atkui::Framework(atkui::Orthographic) {
  }

  void setup() {
    currentPosition3 = CD(0);
    t = 0;
  }

  void scene() {
    setColor(vec3(1));
    //drawSphere(vec3(250, 250, 0), 10);
    for(float i = 0; i < 1; i = i + step){
      setColor(vec3(0,1,0));
      currentPosition = CD(i);
      currentPosition2 = CD(i + step);
      drawLine(currentPosition,currentPosition2);
      vel = CD(i);
      currentPosition3 = currentPosition + (vel * elapsedTime())/5.00f;
      drawSphere(currentPosition3,10);
      }

    
      //currentPosition3 = currentPosition3 + elapsedTime();
      //drawSphere(currentPosition3,10);
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

  private:
  vec3 value;
  vec3 currentPosition;
  vec3 currentPosition2;
  vec3 currentPosition3;
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
  int t;
};

int main(int argc, char** argv) {
  ParticleCubic viewer;
  viewer.run();
}

