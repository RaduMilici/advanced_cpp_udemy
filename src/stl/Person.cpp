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

void Person::print() const{
	cout << name << ": " << age << endl;
}

bool Person::operator < (const Person &other) const{
	return name < other.name;
}

}
