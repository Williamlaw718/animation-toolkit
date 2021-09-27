#include "atkui/framework.h"

using namespace glm;
class Eyes : public atkui::Framework
{
  public:
    Eyes() : atkui::Framework(atkui::Orthographic) {
    }

    virtual void setup() {
      //thetaR = .1;
      //double radius = 100; 
      float thetaR = 0.1;
      float theta;
    }

    virtual void scene() {
    setColor(vec3(0,0,0));
    //theta = thetaR * elapsedTime();
    double radius = 100;
    float py = radius * sin(elapsedTime()) + .8 * height();
    float px = radius * cos(elapsedTime()) + .25 * width();
    float px2 = radius * cos(elapsedTime()) + .75 * width();
    double x = width() * 0.25;
    double y = height() * 0.8;
    double x2 = width() * .75;
    double y2 = height () * .8;
    drawSphere(vec3(px,y,0), radius);
    
    setColor(vec3(1,1,1));
    double r = 200;
    drawSphere(vec3(x,y,-100), 200);
    setColor(vec3(0,0,0));
    drawSphere(vec3(px2,y,0), radius);
    setColor(vec3(1,1,1));
    drawSphere(vec3(x2,y,-100), 200);
    }

    
};

int main(int argc, char** argv) {
  Eyes viewer;
  viewer.run();
  return 0;
}
