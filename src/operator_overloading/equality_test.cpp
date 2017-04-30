#include <iostream>
#include "Complex.h"
using namespace std;

namespace op_ov{

void equality_test () {

	Complex c1(29, 5);
	Complex c2(19, 89);
	Complex c3(29, 5);

	/*
	 * check in Complex.h and Complex.cpp
	 *
	 * bool operator == (const Complex & a, const Complex & b);
	 *
	 * */

	if(c1 == c2) {
		cout << "c1 == c2" << endl;
	}
	else {
		cout << "c1 != c2" << endl; // true
	}

	//-------------------------------------------------------------

	if(c1 == c3) {
		cout << "c1 == c3" << endl; // true
	}
	else {
		cout << "c1 != c3" << endl;
	}

}

}


