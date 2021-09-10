#include "atkui/framework.h"

using glm::vec3;

class Example : public atkui::Framework {
 public:
  Example() : atkui::Framework(atkui::Orthographic) {
  }

  virtual void setup() {
    theta = 0;
    thetaR = 0.1;
    r = 200;
  }

  virtual void scene() {
    
    // update position based on time
    //currentPos = currentPos + vel * elapsedTime();
    theta = thetaR * dt();
    float px = r * cos(theta) + .5 * width(); 
    float py = r * sin(theta) + .5 * height();
    // colors are RGB triplets in range [0,1]
    setColor(vec3(0,1,0));

    // draw a sphere at center of screen
    //double radius = 100; 
    drawSphere(vec3(px,py,0), 200);
  }
  private:
    float theta;
    float thetaR;
    float r;
};

int main(int argc, char** argv) {
  Example example;
  example.run();
}