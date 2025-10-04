#include "Point.h"

Point::Point() {
	this->x = this->y = this->z = 0;
}

Point::Point(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Point::Point(Point& other) {
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
}

double Point::getX() { return x; }
double Point::getY() { return y; }
double Point::getZ() { return z; }

bool Point::operator == (const Point& other) {
	return this->x == other.x &&
		   this->y == other.y &&
		   this->z == other.z;
}

bool Point::operator != (const Point& other) {
	return this->x != other.x ||
		   this->y != other.y ||
		   this->z != other.z;
}