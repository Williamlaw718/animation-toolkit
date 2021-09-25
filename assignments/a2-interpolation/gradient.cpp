#include <iostream>
#include "atkui/framework.h"
using namespace glm;

class Gradient : public atkui::Framework {
 public:
  Gradient() : atkui::Framework(atkui::Orthographic) {
  }
  virtual void setup(){
    px = 25;
    py = 475;
  }
  virtual void scene() {
    setColor(CNW);
    //drawCube(vec3(25,475,0),vec3(50,50,0));
    for(int i = 0; i < 500; i++){
      px = px + 25;
      for(int j = 0; j < 500; j++){
        drawCube(vec3(px, py,0),vec3(50,50,0));
        py = py - 25;
      }
    }
  }

  private:
  vec3 CNW = vec3(1,1,0);
  vec3 CNE = vec3(0,1,1);
  vec3 CSW = vec3(1,0,0);
  vec3 CSE = vec3(1,0,1);
  float tx;
  float ty;
  float px;
  float py;
};


int main(int argc, char **argv) {
  Gradient viewer;
  viewer.run();
}
