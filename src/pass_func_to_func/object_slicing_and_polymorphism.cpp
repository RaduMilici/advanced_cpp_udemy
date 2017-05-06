/*
 * object_slicing_and_polymorphism.cpp
 *
 *  Created on: May 1, 2017
 *      Author: radu
 */

#include <iostream>
using namespace std;

//------------------------------------------------------------------------
class Parent {
public:
	Parent(): n1(0) {}
	Parent(const Parent &other): n1(0) { cout << "copy parent" << endl; }
	virtual ~Parent(){}
	virtual void print() { cout << "parent" << endl; }
private:
	int n1;
};
//------------------------------------------------------------------------
class Child : public Parent {
public:
	Child(): n2(0) {}
	virtual ~Child(){}
	void print() { cout << "child" << endl; }
private:
	int n2;
};
//------------------------------------------------------------------------

namespace pass_func_to_func {

void object_slicing_and_polymorphism() {

	Child c1;
	Parent &p1 = c1;
	p1.print();

	Parent *p2 = &c1;
	p2 -> print();

	Parent p3 = Child();
	p3.print();

}

}




