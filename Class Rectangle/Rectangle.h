#pragma once


using namespace std;


class Rectangle
{
private:
	float length;
	float width;

public:

	Rectangle();
	Rectangle(int w, int l);
	Rectangle(const Rectangle& r);

	~Rectangle();

	Rectangle& operator=(const Rectangle& r);
	bool operator==(const Rectangle& r);

	void SetDim(int w, int l);
	void SetLength(int l);
	void SetWidth(int w);

	void GetDim(int& w, int& l);
	int GetLength();
	int GetWidth();

	float GetArea();
	float GetPerimeter();
	
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();

};



