/*
 * abstract_classes.cpp
 *
 *  Created on: May 1, 2017
 *      Author: radu
 */

#include <iostream>
using namespace std;

//------------------------------------------------------------------------
class Animal {
public:
	virtual ~Animal() {};
	/*
	 * pure virtual function
	 *
	 * http://www.learncpp.com/cpp-tutorial/126-pure-virtual-functions-abstract-base-classes-and-interface-classes/
	 */
	virtual void speak() = 0;
};
//------------------------------------------------------------------------
class Dog : public Animal {
public:
	void speak() { cout << "woof" << endl; }
};
//------------------------------------------------------------------------

namespace pass_func_to_func {

void abstract_classes() {

	Dog dog;
	dog.speak();

}

}




