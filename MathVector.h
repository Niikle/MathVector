#pragma once
#include "Point.h"

class MathVector{
private:
	Point startPoint, endPoint;
	double i, j;

	void calculateIJ();

public:
	MathVector();
	MathVector(Point startPoint, Point endPoint);
	MathVector(MathVector& other);

};

