#ifndef ISOTRAPEZOID_H
#define ISOTRAPEZOID_
# include "polygon.h"
#pragma once

class IsoTrapezoid : public Polygon
{
public:
    IsoTrapezoid();
    IsoTrapezoid(float bottomSide,float height,float topSide);
    IsoTrapezoid(const IsoTrapezoid& other);
    ~IsoTrapezoid();
    float GetSide();
    bool CheckbottomSide();
    bool Checkpropieties();
    void Draw();
    float Area();
    float Perimeter();


 private:
      float bottomSide;
      float height;
      float topSide;
};

#endif