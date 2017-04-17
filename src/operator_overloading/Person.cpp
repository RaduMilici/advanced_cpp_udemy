#include <iostream>
#include "Person.h"
using namespace std;

namespace op_ov {

// constructors

Person::Person (const Person & other) {
	cout << "Person copy constructor" << endl;
	id = other.id;
	name = other.name;
}

Person::Person():
		id(0), name("") {
}

Person::Person (int id, string name):
		id(id), name(name) {
}

// destructor

Person::~Person () {
	cout << name << "'s Person destructor called" << endl;
}

// methods

void Person::print(){
	cout << id << ": " << name << endl;
}

// operator overloads

const Person & Person::operator = (const Person & other) {
	cout << name << " assignment operator overload" << endl;

	id = other.id;
	name = other.name;

	return * this;
}

} /* namespace op_ov */


















