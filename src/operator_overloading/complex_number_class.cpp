#include <iostream>
#include "Complex.h"
using namespace std;

namespace op_ov{

void complex_number_class () {

	Complex c1(29, 5);
	Complex c2 = c1;
	Complex c3(19, 89);

	cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;

}

}


