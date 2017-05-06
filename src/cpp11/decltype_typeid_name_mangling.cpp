/*
 * decltype_typeid_name_mangling.cpp
 *
 *  Created on: May 2, 2017
 *      Author: radu
 */

#include <iostream>
#include <typeinfo>
using namespace std;

namespace cpp11 {

void name_mangling_test_1 () {}
void name_mangling_test_1 (int a) {}

//-------------------------------------------------------------------------------
void name_mangling () {
	// http://www.geeksforgeeks.org/extern-c-in-c/
	int val1;
	cout << typeid(val1).name() << endl; // prints 'i' from integer

	double val2;
	cout << typeid(val2).name() << endl; // prints 'd' from double

	string val3;
	cout << typeid(val3).name() << endl; // prints 'NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE' (●__●)
}
//-------------------------------------------------------------------------------
void _decltype () {
	string value;

	decltype (value) name = "radu";
	cout << (name).name() << endl; // prints 'NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE'
}
//-------------------------------------------------------------------------------

void decltype_typeid_name_mangling () {

	name_mangling();
	_decltype();

}

}
