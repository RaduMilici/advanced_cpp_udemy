#include <iostream>
#include "Person.h"
using namespace std;

namespace op_ov {

Person::~Person() {
}

Person::Person(): id(0), name("") {
}

Person::Person(int id, string name):
		id(id), name(name){
}

void Person::print(){
	cout << id << ": " << name << endl;
}

const Person & Person::operator = (const Person & other) {
	cout << "----------------------------" << endl;
	cout << name << " assignment operator overload" << endl;
	cout << "name before: " << name << " | " << flush;

	id = other.id;
	name = other.name;

	cout << "name after: " << name << endl;
	cout << "----------------------------" << endl;


	return * this;
}


} /* namespace op_ov */
