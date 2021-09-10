#include "atkui/framework.h"

using glm::vec3;

class Sphere3D : public atkui::Framework {
 public:
  Sphere3D() : atkui::Framework(atkui::Perspective) {
  }
  virtual void setup(){
    currentPos = vec3(0,0,0);
    vel = 100.0f * vec3(1, 3, 4);
  }
  virtual void scene() {
    // colors are RGB triplets in range [0,1]
    setColor(vec3(0,1,0));
    //drawSphere(vec3(0), radius);
    // draw a sphere at center of the world
    //currentPos = vel * dt();
    //float px = r * cos(theta) + .5 * width(); 
    //float py = r * sin(theta) + .5 * height();
    drawSphere(vec3(currentPos), radius);
  }

   void keyUp(int key, int mods) {
    if (key == GLFW_KEY_SPACE ) {
      //std::cout << "Toggle camera controls " << cameraEnabled() << std::endl;
      //setCameraEnabled(!cameraEnabled());
      currentPos = agl::randomUnitVector();
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
};

int main(int argc, char** argv)
{
  Sphere3D viewer;
  viewer.run();
  return 0;
}
