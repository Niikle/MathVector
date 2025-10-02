#pragma once

class MathVector{
private:
	double i, j, k;

public:
	MathVector();
	MathVector(MathVector& other);
	MathVector(double i, double j, double k);

	bool operator == (const MathVector& other);
	bool operator != (const MathVector& other);

	MathVector& operator * (double num);
	MathVector& operator + (const MathVector& other);

};