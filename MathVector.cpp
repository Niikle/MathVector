#include "MathVector.h"
#include <cmath>

using namespace Vectors;

MathVector::MathVector() {
	i = j = k = 0;
}

MathVector::MathVector(MathVector& other) {
	this->i = other.i;
	this->j = other.j;
	this->k = other.k;
}

MathVector::MathVector(double i, double j, double k) {
	this->i = i;
	this->j = j;
	this->k = k;
}

bool MathVector::operator == (const MathVector& other) {
	return this->i == other.i &&
		   this->j == other.j &&
		   this->k == other.k;
}

bool MathVector::operator != (const MathVector& other) {
	return this->i != other.i ||
		   this->j != other.j ||
		   this->k != other.k;
}

MathVector& MathVector::operator * (double num) {
	i *= num;
	j *= num;
	k *= num;

	return *this;
}

MathVector& MathVector::operator + (const MathVector& other) {
	this->i += other.i;
	this->j += other.j;
	this->k += other.k;

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

MathVector& MathVector::reverse() {
	(*this) * (-1);

	return *this;
}

void foo(){}

//double scalarProduct(MathVector& thirstVector, MathVector& seconsVector) {
//	return thirstVector.getI() * seconsVector.getI() +
//		   thirstVector.getJ() * seconsVector.getJ() +
//		   thirstVector.getK() * seconsVector.getK();
//}