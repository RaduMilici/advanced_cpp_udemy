#ifndef SRC_STL_PERSON_H_
#define SRC_STL_PERSON_H_

#include <iostream>
using namespace std;

namespace stl_udemy{

class Person{
public:
	// DEFAULT CONSTRUCTOR
	Person();
	// COPY CONSTRUCTOR
	Person(const Person &other);
	Person(string name, int age);
	~Person();
	/*
	 * A "const function", denoted with the keyword const after a function declaration,
	 * makes it a compiler error for this class function to change a member variable
	 * of the class.
	 * */
	void print() const;
	bool operator < (const Person &other) const;
	/*
	 * The friend declaration appears in a class body and grants a function or another
	 * class access to private and protected members of the class where the friend
	 * declaration appears.
	 * */
	friend bool compAge(const Person &a, const Person &b);
private:
	string name;
	int age;
};

}

#endif /* SRC_STL_PERSON_H_ */
