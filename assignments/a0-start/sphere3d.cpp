#include "atkui/framework.h"
#include <string>
#define GLFW_KEY_SPACE   32
#define GLFW_KEY_R   82

using glm::vec3;

class Sphere3D : public atkui::Framework {
 public:
  Sphere3D() : atkui::Framework(atkui::Perspective) {
  }
  virtual void setup(){
    currentPos = vec3(0,0,0);
    vel = 400.0f * vec3(1, 3, 4);
    key = getchar();

  }
  virtual void scene() {
    setColor(vec3(0,1,0));
    drawSphere(vec3(currentPos), radius);
    if(value == GLFW_KEY_SPACE){
      keyUp(key, value);
    }

    if(value == GLFW_KEY_R){
      keyUp(key, value);
    }
  }

   void keyUp(int key, int mods) {



     
    if (key == GLFW_KEY_SPACE ) {
      //std::cout << "Toggle camera controls " << cameraEnabled() << std::endl;
      //setCameraEnabled(!cameraEnabled());
      currentPos = agl::randomUnitVector() * (vel * dt());
      //drawSphere(currentPos, radius);
    }

    if(key == GLFW_KEY_R){
      currentPos = vec3(0);
      //drawSphere(currentPos, radius);
    }
  }
  private:
    vec3 currentPos;
    vec3 vel;
    float radius = 50.0;
    char key;
    int value;
};

int main(int argc, char** argv)
{
  Sphere3D viewer;
  viewer.run();
  return 0;
}
