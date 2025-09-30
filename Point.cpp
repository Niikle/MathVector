#include "Point.h"

Point::Point() {
	this->x = this->y = this->z = 0;
}

Point::Point(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}