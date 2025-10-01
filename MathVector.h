#pragma once
#include "Point.h"

class MathVector{
private:
	Point startPoint, endPoint;
	double i, j, k;

private:
	void calculateIJK();

public:
	MathVector();
	MathVector(Point startPoint, Point endPoint);
	MathVector(MathVector& other);
	MathVector(double i, double j, double k);
	MathVector(double x1, double y1, double z1, 
			   double x2, double y2, double z2);

	bool operator == (const MathVector& other);
	bool operator != (const MathVector& other);

	MathVector& operator * (double num);
	MathVector& operator + (const MathVector& other);

};