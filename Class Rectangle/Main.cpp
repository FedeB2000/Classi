#include<iostream>

#include "Rectangle.h"

int main() {

	Rectangle A(10, 5);
	A.SetDim(20, 10);
	cout<<"La lunghezza del rettangolo è \n "<<A.GetLength()<<endl;
	cout << "La larghezza del rettangolo è \n" << A.GetWidth()<<endl;
	int w = 20;
	int l = 10;
	A.GetDim(w, l);

}
