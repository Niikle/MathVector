#include "MathVector.h"

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