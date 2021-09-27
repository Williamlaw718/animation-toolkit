#include "atkui/framework.h"

using namespace glm;

class Look : public atkui::Framework {
 public:
  Look() : atkui::Framework(atkui::Orthographic) {
  }

  virtual void setup() {
    _mouseX = width() * 0.5;
    _mouseY = height() * 0.5;
    theta = atan2(_mouseX, _mouseY);
  }

  virtual void scene() {
    vec3 target = vec3(_mouseX, _mouseY, 0);
    setColor(vec3(1,0,0));
    drawSphere(target, 10);
    vec2 target2 = mousePosition();
    target2[1] = height() - target2[1]; 
    drawSphere(vec3(target2,0),100);
    /*if (glfwGetCursorPos(NULL,NULL,NULL) == target &)
    {
      /* code */
    
    
    setColor(vec3(0,0,0));
    double radius = 100;
    double x = width() * 0.25;
    double y = height() * 0.8;
    double x2 = width() * .75;
    float py = radius * sin(theta) + .8 * height();
    float px = radius * cos(theta) + .25 * width();
    float px2 = radius * cos(theta) + .75 * width();
    cPosition = vec3(cos(theta),sin(theta), 0);
    drawSphere(vec3(px,py,0), radius);
    setColor(vec3(1,1,1));
    drawSphere(vec3(x,y,-100), 200);
    setColor(vec3(0,0,0));
    drawSphere(vec3(px2,py,0), radius);
    setColor(vec3(1,1,1));
    drawSphere(vec3(x2,y,-100), 200);
  }

  void mouseMove(float x, float y, float dx, float dy) {
    _mouseX = x;
    _mouseY = height() - y;
    
  }

  void keyUp(int key, int mods) {
      if(key == GLFW_MOUSE_BUTTON_LEFT){
        
      }
  }

 private:
  float _mouseX;
  float _mouseY;
  //float vel;
  float theta;
  int value;
  vec3 cPosition;
  vec3 vel;
};

int main(int argc, char** argv) {
  Look viewer;
  viewer.run();
  return 0;
}
