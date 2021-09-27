#include "atkui/framework.h"

using namespace glm;

class Particles : public atkui::Framework{
 public:
  Particles() : atkui::Framework(atkui::Orthographic) {
  }
  
  virtual void setup() {
    r = rand() % 1;
    currentPosition = agl::randomUnitVector();
    vel2 = 1.0f * vec3(1, 3, 4);
    pSize = 100;
    mParticles = new Particle[100];

    for (int i = 0; i < 100; i++)
    {
      mParticles[i].position = 400.0f * agl::randomUnitVector();
      mParticles[i].vel = vel2;
    }
    
  }

  virtual void scene() {
    theta = thetaR * dt();
    float px = r * cos(theta) + .5 * width(); 
    float py = r * sin(theta) + .5 * height();
    currentPosition = currentPosition + vel2 * elapsedTime();

    // colors are RGB triplets in range [0,1]

    // draw a sphere at center of screen
    double radius = 10; 
    //drawSphere(currentPosition, radius);
    
    for(int i = 0; i < 100; i++){
      setColor(vec3(1,1,1));
      mParticles[i].position = mParticles[i].position + mParticles[i].vel * elapsedTime();
      drawSphere(mParticles[i].position,10);
    }
  
  }

  struct Particle{
      vec3 position;
      vec3 vel;
      vec3 color;
    };

  private:
    int pSize;
    Particle * mParticles;
    float theta;
    float thetaR;
    vec3 vel2;
    vec3 currentPosition;
    int r;
};

int main(int argc, char** argv) {
  Particles viewer;
  viewer.run();
  return 0;
}
