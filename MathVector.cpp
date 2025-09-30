#include "MathVector.h"

MathVector::MathVector() {
	this->startPoint.x =
	this->startPoint.y =
	this->startPoint.z =
	this->endPoint.x =
	this->endPoint.y = 
	this->endPoint.z = 0;
}

MathVector::MathVector(Point startPoint, Point endPoint) {
	this->startPoint.x = startPoint.x;
	this->startPoint.y = startPoint.y;
	this->startPoint.z = startPoint.z;
	this->endPoint.x = endPoint.x;
	this->endPoint.y = endPoint.y;
	this->endPoint.z = endPoint.z;
}

MathVector::MathVector(MathVector& other) {
	this->startPoint.x = other.startPoint.x;
	this->startPoint.y = other.startPoint.y;
	this->startPoint.z = other.startPoint.z;
	this->endPoint.x = other.endPoint.x;
	this->endPoint.y = other.endPoint.y;
	this->endPoint.z = other.endPoint.z;
	this->i = other.i;
	this->j = other.j;
}