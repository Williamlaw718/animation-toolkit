#include "atkui/framework.h"
using namespace glm;

class ParticleCubic : public atkui::Framework {
 public:
  ParticleCubic() : atkui::Framework(atkui::Orthographic) {
  }

  void setup() {
    currentPosition3 = vec3(0);
  }

  void scene() {
    setColor(vec3(1));
    //drawSphere(vec3(250, 250, 0), 10);
    for(float i = 0; i < 1; i = i + step){
      setColor(vec3(0,1,0));
      currentPosition = BezierCurve(i);
      currentPosition2 = BezierCurve(i + step);
      drawLine(currentPosition,currentPosition2);
      vel = BezierCurve(i);
      currentPosition3 = currentPosition3 + vel;
      drawSphere(currentPosition3,10);
      }
      vel =  BezierCurve(0);
      //currentPosition3 = currentPosition3 + vel;
      //drawSphere(currentPosition3,10);

    
    
      //currentPosition3 = currentPosition3 + elapsedTime();
      //drawSphere(currentPosition3,10);
  }

  vec3 BezierCurve(float t){
      value = ((1.0f-t) * (1.0f-t) * (1.0f - t) * B0) + (3.0f*t*(1.0f-t) * (1.0f-t) * B1) + ((3*t * 3 * t)*(1-t)*B2) + ((t*t*t)*B3);
      return value;
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
  float step = 1.0f/40.0f;
  vec3 vel;
};

int main(int argc, char** argv) {
  ParticleCubic viewer;
  viewer.run();
}

