#pragma once
#include "Point.h"

class MathVector {
private:
	Point startPoint, endPoint;
	double i, j, k;

private:
	MathVector(Point thirstPoint, Point secondPoint);

	void calculateIJK();

public:
	MathVector();
	MathVector(MathVector& other);
	MathVector(double i, double j, double k);
	MathVector(double x1, double y1, double z1,
			   double x2, double y2, double z2);

	bool operator == (const MathVector& other);
	bool operator != (const MathVector& other);

	MathVector& operator * (double num);
	MathVector& operator + (const MathVector& other);
	MathVector& operator - (const MathVector& other);
	MathVector& operator * (const MathVector& other);

	double length();

	double getI();
	double getJ();
	double getK();

	double getStartPointX();
	double getStartPointY();
	double getStartPointZ();

	double getEndPointX();
	double getEndPointY();
	double getEndPointZ();

	MathVector& reverse();

};