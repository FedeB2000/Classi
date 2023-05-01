#include<iostream>
#include "Rectangle.h"

Rectangle::Rectangle() {

	cout << "Rectangle - constructor - default" << endl;

	width = 0;
	length = 0;

}
Rectangle::Rectangle(int w, int l) {

	width = 0;
	length = 0;

	cout << "Rectangle - constructor" << endl;

	if (w <= 0)
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		width = w;

	if (l <= 0)
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		length = l;
}
Rectangle::Rectangle(const Rectangle& r) 
{

	cout << "Rectangle - copy constructor" << endl;
	length= r.length;
	width = r.width;
}
Rectangle::~Rectangle() {

	cout << "Rectangle - destructor" << endl;

}
Rectangle& Rectangle::operator=(const Rectangle& r) {

	cout << "Rectangle - operator =" << endl;
return *this;

}
bool Rectangle::operator==(const Rectangle& r) {

	if (r.width == width && r.length == length)
		return true;

	return false;
}
void Rectangle::SetWidth(int w) {

	if (w < 0) {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}

	width = w;

}
void Rectangle::SetLength(int l) {

	if (l < 0) {
		cout << "WARNING: Rectangle - SetLength: length should be > 0" << endl;
		return;
	}

	length = l;

}
void Rectangle::SetDim(int w, int l) {

	SetWidth(w);
	SetLength(l);
}
int Rectangle::GetWidth()
{
  return width;
}
int Rectangle::GetLength() {

	return length;
}

void Rectangle::GetDim(int& w, int& l) {
	 l= length;
	 w = width;
	cout << "La larghezza del rettangolo e" << l<<endl;
	cout << "La larghezza del rettangolo e" << w<<endl;
}
float Rectangle::GetArea() {

	return width * length;

}

float Rectangle::GetPerimeter() {

	return 2 * (width + length);

}
void Rectangle::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Rectangle --";
	cout << string << endl;

}
void Rectangle::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Rectangle --";
	cout << string << endl;

}
void Rectangle::Dump() {
	cout << endl;
	cout << "---Rectangle---" << endl;
	cout << endl;

	cout << "Width = " << width << endl;
	cout << "Length = " << length << endl;
	cout << "Perimeter = " << GetPerimeter() << endl;
	cout << "Area = " << GetArea() << endl;
	cout << endl;

}