#include <iostream>
#include "Person.h"
using namespace std;

namespace op_ov{

void assignment_operator(){

	cout << "print p1: " << flush;
	Person p1(29, "radu");
	p1.print(); // 29: radu

	Person p2(47, "vasi");

	p2 = p1;    // creates a shallow copy

	cout << "print p2: " << flush;
	p2.print(); //29: radu

	Person p3;
	p3 = p2 = p1;

	//p3.operator = (p2);

	cout << "print p3: " << flush;
	p3.print();

	cout << endl;

	Person p4 = p1;
	// copy initialization
	cout << "print p4: " << flush;
	p4.print();

}

}
