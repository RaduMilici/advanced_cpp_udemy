#include "Person.h"

namespace stl_udemy{

Person::Person():
	name(""), age(0){
};

Person::Person(string name, int age):
		name(name), age(age){
}

Person::Person(const Person &other){
	name = other.name;
	age = other.age;
	cout << "copy constructor running" << endl;
}

Person::~Person(){
	//cout << "Person object destroyed" << endl;
}

void Person::print() const{
	cout << name << ": " << age << endl;
}

/*
 * A "const function", denoted with the keyword const after a function declaration,
 * makes it a compiler error for this class function to change a member variable
 * of the class.
 * */
bool Person::operator < (const Person &other) const{
	return name < other.name;
}

}
