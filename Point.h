#pragma once
//#include "MathVector.h"

class Point{
private:
	double x, y, z;

public:
	Point();
	Point(double x, double y, double z);
	friend class MathVector;

};

