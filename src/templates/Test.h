/*
 * Test.h
 *
 *  Created on: Apr 23, 2017
 *      Author: radu
 */

#ifndef TEST_H_
#define TEST_H_

#include <iostream>
using namespace std;

namespace templates {

template <class T>
class Test {

public:
	Test (T obj) {
		cout << "constructor called" << endl;
		this -> obj = obj;
	}

	void print () {
		cout << "print called: " << obj << endl;
	}

private:
	T obj;

};

}

#endif /* TEST_H_ */
