#include "MathVector.h"
#include <cmath>

MathVector::MathVector() {
	this->startPoint.x =
	this->startPoint.y =
	this->startPoint.z =
	this->endPoint.x =
	this->endPoint.y =
	this->endPoint.z = 
		i = j = k = 0;
}

MathVector::MathVector(Point startPoint, Point endPoint) {
	this->startPoint.x = startPoint.x;
	this->startPoint.y = startPoint.y;
	this->startPoint.z = startPoint.z;
	this->endPoint.x = endPoint.x;
	this->endPoint.y = endPoint.y;
	this->endPoint.z = endPoint.z;

	calculateIJK();
}

MathVector::MathVector(MathVector& other) {
	this->startPoint.x = other.startPoint.x;
	this->startPoint.y = other.startPoint.y;
	this->startPoint.z = other.startPoint.z;
	this->endPoint.x = other.endPoint.x;
	this->endPoint.y = other.endPoint.y;
	this->endPoint.z = other.endPoint.z;

	calculateIJK();
}

MathVector::MathVector(double x1, double y1, double z1,
	double x2, double y2, double z2) {
	this->startPoint.x = x1;
	this->startPoint.y = y1;
	this->startPoint.z = z1;
	this->endPoint.x = x2;
	this->endPoint.y = y2;
	this->endPoint.z = z2;

	calculateIJK();
}

MathVector::MathVector(double i, double j, double k) {
	this->startPoint.x =
	this->startPoint.y =
	this->startPoint.z = 0;
	this->endPoint.x = i;
	this->endPoint.y = j;
	this->endPoint.z = k;

	calculateIJK();
}

void MathVector::calculateIJK() {
	i = endPoint.x - startPoint.x;
	j = endPoint.y - startPoint.y;
	k = endPoint.z - startPoint.z;
}

bool MathVector::operator == (const MathVector& other) {
	return this->startPoint == other.startPoint &&
		this->endPoint == other.endPoint;
}

bool MathVector::operator != (const MathVector& other) {
	return this->startPoint != other.startPoint ||
		this->endPoint != other.endPoint;
}

MathVector& MathVector::operator * (double num) {
	this->endPoint.x *= num;
	this->endPoint.y *= num;
	this->endPoint.z *= num;

	calculateIJK();

	return *this;
}

MathVector& MathVector::operator + (const MathVector& other) {
	this->startPoint.x += other.startPoint.x;
	this->startPoint.y += other.startPoint.y;
	this->startPoint.z += other.startPoint.z;
	this->endPoint.x += other.endPoint.x;
	this->endPoint.y += other.endPoint.y;
	this->endPoint.z += other.endPoint.z;

	calculateIJK();

	return *this;
}

MathVector& MathVector::operator - (const MathVector& other) {
	this->i -= other.i;
	this->j -= other.j;
	this->k -= other.k;

	return *this;
}

MathVector& MathVector::operator * (const MathVector& other) {
	this->i = this->j * other.k;
	this->j = this->k * other.j;
	this->k = this->k * other.i;

	return *this;
}

double MathVector::length() {
	return abs(sqrt(i * i) + sqrt(j * j) + sqrt(k * k));
}

double MathVector::getI() { return i; }
double MathVector::getJ() { return j; }
double MathVector::getK() { return k; }

double MathVector::getStartPointX() { return startPoint.getX(); }
double MathVector::getStartPointY() { return startPoint.getY(); }
double MathVector::getStartPointZ() { return startPoint.getZ(); }

double MathVector::getEndPointX() { return startPoint.getX(); }
double MathVector::getEndPointY() { return startPoint.getY(); }
double MathVector::getEndPointZ() { return startPoint.getZ(); }

MathVector& MathVector::reverse() {
	(*this) * (-1);

	return *this;
}