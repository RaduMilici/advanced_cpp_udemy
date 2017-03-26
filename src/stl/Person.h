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
	void print() const;
	bool operator < (const Person &other) const;
private:
	string name;
	int age;
};

}

#endif /* SRC_STL_PERSON_H_ */
