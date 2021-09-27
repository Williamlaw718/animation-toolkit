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
    tx = 0;
    ty = 0;
    
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

    for (int i = 0; i < height(); i++)
    {
      cube[i].color = colorI(cube[i].position[0], cube[i].position[1]);
      cube2[i].color = colorI(cube2[i].position[0], cube2[i].position[1]);
    }
    
    

    /*for (int i = 0; i < height(); i++){
    
      cube[i].position[1] = py;
      //py = py - 10;
    }*/
  }
  virtual void scene() {
    //drawCube(vec3(width(),height(),0),vec3(50,50,0));
     //Cx = CNW * (1 - cube[j].position[j]) + CNE * cube[j].position[j];
      
      for(int j = 0; j <= height() * width(); j++){
        //setColor(colorI(cube[j].position[0],cube[j].position[1]));
        setColor(cube[j].color);
        drawCube(cube[j].position,vec3(50,50,0));
      
        //currentPosition[1] = currentPosition[1] - 50;
          
      }

      for (int i = 0; i <= height() * width(); i++)
          {
            //currentPosition[0] = currentPosition[0] - 25;
            //setColor(colorI(cube2[i].position[0],cube2[i].position[1]));
            setColor(cube2[i].color);
            drawCube(cube2[i].position,vec3(50,50,0));
          }

      //drawCube(currentPosition,vec3(50,50,0));
  }

  vec3 colorI(float px, float py){
    tx = width()/px;
    ty = height()/py;
    //tx = std::clamp(tx,0,1);
    //ty = std::clamp(ty,0,1);
    //clamp(tx,0,1);
    //clamp(ty,0,1);
   
    CX0 = CNW * (1-tx) + CNE * tx;
    CX1 = CSW * (1-tx) + CSE * tx;
    C = CX0 * (1-ty) + CX1 * ty;
    return C;
  }

  struct Cube
  {
    vec3 position;
    vec3 color;
  };
  
  private:
  vec3 CNW = vec3(1,1,0);
  vec3 CNE = vec3(0,1,1);
  vec3 CSW = vec3(1,0,0);
  vec3 CSE = vec3(1,0,1);
  vec3 CX0;
  vec3 CX1;
  vec3 C;
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
