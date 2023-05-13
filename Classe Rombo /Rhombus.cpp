#include<iostream>
#include "Rhombus.h"


Rhombus::Rhombus() {

	diagH = 0;
	diagV = 0;
}
float Rhombus::Side()
{
	float lato = 0;
	float sum = (diagH / 2) ^ 2 + (diagV / 2) ^ 2;
		lato = sqrt(sum);
}
Rhombus::Rhombus(float dH, float dV) 
{
	diagH = 0;
	diagV = 0;
    if (dH <= 0)
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		diagH = dH;

	if (dV <= 0)
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		diagV = dV;
}
Rhombus::Rhombus(const Rhombus& r)
{
	diagH = r.diagH;
	diagV = r.diagV;
}

Rhombus::~Rhombus() 
{

	cout << "Rhombus - destructor" << endl;
}
Rhombus::Rhombus& operator=(const Rhombus& r)
{
	return *this;
}
Rhombus::bool operator==(const Rhombus& r)
{
	if (r.diagH == diagH && r.diagV == diagV)
		return true;

	return false;
}
void RhombusSetDim(float dH, float dV)
{
	SetDiagH(dH);
	SetDiagV(dV);

}
void Rhombus::SetDiagH(float dH)
{
	if (dH <= 0)
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		diagH = dH;
}
void Rhoumbus::SetDiagV(float dV)
{
	if (dV <= 0)
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		diagV = dV;
}
float Rhombus::GetDiagH()
{
	return diagH;
}
float Rhombus::GetDiagV()
{
	return diagV;
}
float Rhombus::GetSide()
{
	return Side();
}

float Rhombus::GetArea()
{
	return ((diagH * diagV) / 2);
}
float Rhombus::GetPerimeter()
{
	return (Side() * 4);
}
void GetDiagonals(float& dH, float& dV)
{
	dH = diagH;
	dV = diagV;
}