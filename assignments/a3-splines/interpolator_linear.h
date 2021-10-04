#ifndef _interpolator_linear_H_
#define _interpolator_linear_H_

#include <string>
#include <vector>
#include "interpolator.h"

//--------------------------------
// Linear 
//--------------------------------

class InterpolatorLinear : public Interpolator
{
public:
    InterpolatorLinear() : Interpolator("Linear") {}
    virtual glm::vec3 interpolate(int segment, double u) const {
       // todo: your code here
       //value = 0;
       return (pn[segment] + ((float) u * (pn[segment] - pn[segment-1])));
       //return glm::vec3(0);
    }

    virtual void computeControlPoints(const std::vector<glm::vec3>& keys) {
       // todo: your code here
       for(int i = 0; i < keys.size(); i++){
          //pn[i] = keys[i];
          pn.push_back(keys[i]);
       }
    }

   private:
   std::vector<glm::vec3> pn;
   glm::vec3 value;

};

#endif
