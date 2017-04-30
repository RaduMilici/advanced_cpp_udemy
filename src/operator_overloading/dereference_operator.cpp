#include <iostream>
#include "Complex.h"
using namespace std;

namespace op_ov{

void dereference_operator () {

	Complex c1(29, 5);

	/*
	 * 	https://en.wikipedia.org/wiki/Complex_conjugate
	 *
	 * 	In mathematics, the complex conjugate of a complex number is the number
	 * 	with equal real part and imaginary part equal in magnitude but opposite
	 * 	in sign. For example, the complex conjugate of 3 + 4i is 3 − 4i.
	 *
	 * check Complex.h and Complex.cpp
	 *
	 * 	Complex operator * () const;
	 *
	 * */

	cout << *c1 << endl; // (29,-5i)

}

}


