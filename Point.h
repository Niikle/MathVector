#pragma once

class Point{
private:
	double x, y, z;

public:
	Point();
	Point(double x, double y, double z);
	Point(Point& other);
	friend class MathVector;

};

