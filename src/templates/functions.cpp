/*
 * functions.cpp
 *
 *  Created on: Apr 23, 2017
 *      Author: radu
 */

#include <iostream>
#include "Test.h"
using namespace std;

//---------------------------------------------------------------------------------------
template <class T>
void print (T value) {
	cout << "template version " << value << endl;
}

void print (int value) {
	cout << "non-template version " << value << endl;
}
//---------------------------------------------------------------------------------------
template <class T>
void show () {
	cout << T() << endl;
}
//---------------------------------------------------------------------------------------

namespace templates {

void functions () {

	print <int> (5); // template version 5
	print <string> ("radu"); // template version radu

	/*
	 * Type Inference
	 *
	 * http://www.cprogramming.com/c++11/c++11-auto-decltype-return-value-after-function.html
	 *
	 */
	print("Hello"); // template version Hello

	// !!!
	print(5); // non-template version 5
	print <int> (5); // template version 5
	print <> (5); // template version 5
	// !!!


}

}
