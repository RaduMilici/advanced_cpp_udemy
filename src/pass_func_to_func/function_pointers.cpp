/*
 * function_pointers.cpp
 *
 *  Created on: Apr 30, 2017
 *      Author: radu
 */

#include <iostream>
using namespace std;

void test (string name) {
	cout << "hello " << name << endl;
}

namespace pass_func_to_func {

void function_pointers() {

	// declare pointer with return tyoe and parameters
	void (*pTest) (string name);

	// assign value, to function itself, not function call, much like js
	pTest = test;

	// call the pointer directly
	pTest("world");

}

}
