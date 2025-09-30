#pragma once
#include "Point.h"

class MathVector{
private:
	Point startPoint, endPoint;
	double i, j;
private:
	void calculateIJ();

public:
	MathVector();
	MathVector(Point startPoint, Point endPoint);
	MathVector(MathVector& other);

	bool operator == (const MathVector& other);
	bool operator != (const MathVector& other);

	MathVector& operator * (double num);

};