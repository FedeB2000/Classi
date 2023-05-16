#include "IsoTrapezoid.h"

IsoTrapezoid::IsoTrapezoid()
{
 bottomSide=0;
 height=0;
 topSide=0;
}
IsoTrapezoid::IsoTrapezoid(float bottomSide,float height,float topSide)
{
 bottomSide=bottomSide;
 height=height;
 topSide=topSide;
 CheckbottomSide();
 Checkpropieties();
}
bool IsoTrapezoid::CheckbottomSide()
{
if(bottomSide<topSide)
{
    return false;
}
else 
{
    return true;
}
}
 bool IsoTrapezoid::Checkpropieties()
 {
    if(bottomSide<0 && topSide<0&&height<0)
    {
        return false;
    }
    else
    {
        return true;
    }
 }
float IsoTrapezoid::GetSide()
{
    float side = sqrt((pow(bottomSide-topSide)+pow(height)));
  return side;
}
IsoTrapezoid::~IsoTrapezoid()
{
cout << " IsoTrapezoid- destructor" << endl;
}
IsoTrapezoid::IsoTrapezoid(const IsoTrapezoid& other) 
{
    bottomSide= other.bottomSide;
    topSide = other.topSide;
    height = other.height;
}
float IsoTrapezoid::Area()
{
   return ((bottomSide+topSide)*height/2);
}
float IsoTrapezoid::Perimeter()
{
 return ((topSide+bottomSide)+height*2);
}
void IsoTrapezoid::Draw()
{
    cout << "Ho costruito isotrapezoide" << endl;
}
