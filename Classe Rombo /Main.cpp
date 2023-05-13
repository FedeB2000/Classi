#include "Rhombus.h"

using namespace std;


void main()
{
	Rhombus rombo(4, 5);
	
	cout << "il perimetro è: " << rombo.GetPerimeter() << endl;
	cout << "l' area e' :" << rombo.GetArea() << endl;
}