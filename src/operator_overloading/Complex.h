#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

namespace op_ov {

class Complex {

public:
	Complex();
	Complex(double real, double imaginary);
	Complex(const Complex &other);
	virtual ~Complex();

	const Complex & operator = (const Complex & other);

	/*
	 * Methods marked as const because when Complex is passed as a
	 * reference argument these getters cant be called otherwise.
	 *
	 * This is because the compiler has a cont object but has no idea
	 * is non-const methods will change it or not.
	*/
	double getReal() const { return real; }
	double getImaginary() const { return imaginary; }

private:
	double real;
	double imaginary;

};

ostream & operator << (ostream & out, const Complex & c);
Complex operator + (const Complex & a, const Complex & b);
Complex operator + (const Complex & a, double real);
Complex operator + (double real, const Complex & a);


} /* namespace op_ov */

#endif /* COMPLEX_H_ */
