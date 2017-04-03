#ifndef SRC_STL_PERSON_H_
#define SRC_STL_PERSON_H_

#include <iostream>
using namespace std;

namespace stl_udemy{

class Person{
public:
	// DEFAULT CONSTRUCTOR
	Person();
	Person(const Person &other);
	Person(string name, int age);
	~Person();
	void print() const;
	/*
	 * A "const function", denoted with the keyword const after a function declaration,
	 * makes it a compiler error for this class function to change a member variable
	 * of the class.
	 * */
	bool operator < (const Person &other) const;
private:
	string name;
	int age;
};

}

#endif /* SRC_STL_PERSON_H_ */
