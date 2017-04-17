#include "Complex.h"

namespace op_ov {

// overloaded operators

ostream & operator << (ostream & out, const Complex & c) {

	out << "(" << c.getReal() << "," << c.getImaginary() << "i)" << flush;

	return out;

}

Complex operator + (const Complex & a, const Complex & b) {

	// add two complex numbers
	double r = a.getReal() + b.getReal();
	double i = a.getImaginary() + b.getImaginary();

	return Complex(r, i);

}

Complex operator + (const Complex & a, double real) {

	// add a complex number and a real number
	double r = a.getReal() + real;
	double i = a.getImaginary();

	return Complex(r, i);
}

Complex operator + (double real, const Complex & a) {

	// just calls the function that adds in reverse
	return a + real;

}

// constructors & destructor

Complex::Complex():
	real(0), imaginary(0) {

}

Complex::Complex(double real, double imaginary):
	real(real), imaginary(imaginary) {

}

Complex::Complex(const Complex & other):
	 real(other.real), imaginary(other.imaginary) {

	cout << "Complex copy" << endl;

}

Complex::~Complex() {

}

const Complex & Complex::operator = (const Complex & other) {

	real = other.real;
	imaginary = other.imaginary;

	return * this;

}

} /* namespace op_ov */
