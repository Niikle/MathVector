#pragma once

class Point{
private:
	double x, y, z;

public:
	Point();
	Point(double x, double y, double z);
	Point(Point& other);

	double getX();
	double getY();
	double getZ();

	bool operator == (const Point& other);
	bool operator != (const Point& other);

	friend class MathVector;

};

