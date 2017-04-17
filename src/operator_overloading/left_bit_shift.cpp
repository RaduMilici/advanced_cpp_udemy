#include <iostream>
#include "Person.h"
using namespace std;

namespace op_ov{

/*
ostream & operator << (ostream & out, const Person & other) {
	out << other.id << ": " << other.name;
	return out;
}
*/

void left_bit_shift () {

	Person p1(10, "radu");
	p1.print();

	cout << p1 << endl;

}

}
