#include <iostream>
#include "atkui/framework.h"
using namespace glm;

class Gradient : public atkui::Framework {
 public:
  Gradient() : atkui::Framework(atkui::Orthographic) {
  }
  virtual void setup(){
    px = width()-25;
    py = height()-25;
    px2 = width()-25;
    py2 = height()-25;
    int size = width();
    int size2 = height();
    currentPosition = vec3(width(),height(),0);
    currentPosition2 = vec3(width(),height(),0);
    cube = new Cube[size];
    cube2 = new Cube[size];
    
    for (int i = 0; i < width(); i++)
    {
      cube[i].position[0] = px;
      cube[i].position[1] = py;
      cube[i].position[2] = 0;
      px = px - 25;
      //py = py - 25
    }

    for (int i = 0; i < height(); i++)
    {
      cube2[i].position[0] = px2;
      cube2[i].position[1] = py2;
      cube2[i].position[2] = 0;
      py = py - 50;
    }
    

    /*for (int i = 0; i < height(); i++){
    
      cube[i].position[1] = py;
      //py = py - 10;
    }*/
  }
  virtual void scene() {
    //drawCube(vec3(width(),height(),0),vec3(50,50,0));
     //Cx = CNW * (1 - cube[j].position[j]) + CNE * cube[j].position[j];
      setColor(vec3(1));
      for(int j = 0; j <= height() * width(); j++){
        drawCube(cube[j].position,vec3(50,50,0));
      
        //currentPosition[1] = currentPosition[1] - 50;
          
      }

      for (int i = 0; i <= height() * width(); i++)
          {
            //currentPosition[0] = currentPosition[0] - 25;
            drawCube(cube2[i].position,vec3(50,50,0));
          }

      //drawCube(currentPosition,vec3(50,50,0));
  }

  struct Cube
  {
    vec3 position;
  };
  
  private:
  vec3 CNW = vec3(1,1,0);
  vec3 CNE = vec3(0,1,1);
  vec3 CSW = vec3(1,0,0);
  vec3 CSE = vec3(1,0,1);
  vec3 Cx;
  float tx;
  float ty;
  float px;
  float py;
  float py2;
  float px2;
  Cube * cube;
  Cube * cube2;
  vec3 currentPosition;
  vec3 currentPosition2;
};


int main(int argc, char **argv) {
  Gradient viewer;
  viewer.run();
}
