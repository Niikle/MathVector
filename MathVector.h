#pragma once

namespace Vectors {
	class MathVector {
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
		MathVector& operator - (const MathVector& other);
		MathVector& operator * (const MathVector& other);

		double length();

		double getI();
		double getJ();
		double getK();

		MathVector& reverse();

	};

	void foo();
	//double scalarProduct(MathVector& thirstVector, MathVector& seconsVector);
}