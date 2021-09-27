#include <iostream>
#include "atkui/framework.h"
using namespace glm;

class DrawCubic : public atkui::Framework
{
 public:
  DrawCubic() : atkui::Framework(atkui::Orthographic, 400, 400) {
  }

  virtual void scene()
  {
    setColor(vec3(0,0,1));
    drawSphere(B0, 10);
    drawSphere(B3, 10);

    setColor(vec3(1,1,0));
    drawSphere(B1, 10);
    drawSphere(B2, 10);
    for(float i = 0; i < 1; i = i + step){
       setColor(vec3(0,0,1));
       //drawSphere(currentPosition,100);
       if (keyIsDown(GLFW_KEY_1) == true)
       {
        currentPosition = BezierCurve(i);
        currentPosition2 = BezierCurve(i + step);
        drawLine(currentPosition,currentPosition2);
       }
       else if (keyIsDown(GLFW_KEY_2) == true)
       {
        currentPosition = CD(i);
        currentPosition2 = CD(i + step);
        drawLine(currentPosition,currentPosition2);
       }
       
       
       //drawLine(currentPosition,currentPosition2);
       //t = t + .25f;
       //currentPosition = currentPosition+iRate;
    }

    //setColor(vec3(0,0,1));
    //drawLine(currentPosition, currentPosition2);
    //setColor(vec3(1,0,0));
    //drawLine(currentPosition,currentPosition2);
    //setColor(vec3(1,0,0));
    //drawSphere(currentPosition,100);
    //drawLine(currentPosition, vec3(100,100,0));
  }

  /*void keyUp(int key, int mod) {
    if (key == GLFW_KEY_1) {
      currentPosition = BezierCurve(t);
      currentPosition2 = BezierCurve(t + .025f);

    }

    else if (key == GLFW_KEY_2) {
      currentPosition = CD(t);
      t = t + .25f;
    }

  
  }*/

   vec3 BezierCurve(float t){
      value = (((1.0f-t) * (1.0f-t) * (1.0f - t)) * B0) + (3.0f*t*((1.0f-t) * (1.0f-t)) * B1) + ((3* (t *t))*(1-t)*B2) + ((t*t*t)*B3);
      return value;
    }

    vec3 CD(float t){
      //return (B0 * (1.0f - t) + B1 + t ) + (B1 * (1.0f - t) + B2 + t ) + (B2 * (1.0f - t) + B3 + t );
      B10 = B0 * (1 - t) + B1 * t;
      B11 = B1 * (1-t) + B2 * t;
      B12 = B2 * (1-t) + B3 * t;
      B20 = B10 * (1-t) + B11 * t;
      B21 = B11 * (1-t) + B12 * t;
      B30 = B20 * (1-t) + B21 * t;
      return B30;
    }

 private:
  vec3 B0 = vec3(100,  50, 0);
  vec3 B1 = vec3(150, 200, 0);
  vec3 B2 = vec3(250, 100, 0);
  vec3 B3 = vec3(300, 300, 0);
  vec3 B10;
  vec3 B11;
  vec3 B12;
  vec3 B20;
  vec3 B21;
  vec3 B30;
  vec3 vel = .1f * vec3(1, 3, 0);
  float iRate = .1;
  int g = 0; 
  vec3 currentPosition;
  float t = 0;
  vec3 currentPosition2;
  vec3 value;
  float step = 1.0f/40.0f;
};

int main(int argc, char **argv) {
  DrawCubic viewer;
  viewer.run();
}
