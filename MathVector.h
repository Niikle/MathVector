#pragma once
#include "Point.h"

class MathVector{
private:
	Point startPoint, endPoint;
	double i, j;

public:
	MathVector();
	MathVector(Point startPoint, Point endPoint);
	MathVector(MathVector& other);

};

