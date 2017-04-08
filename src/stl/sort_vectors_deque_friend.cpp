#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include "Person.h"
using namespace std;

/*
 * http://en.cppreference.com/w/cpp/algorithm/sort
 *
 * std::sort is implemented in the Algorithm library, so at least on the GNU compiler
 * on Linux, you need to include <algorithm> to use it.
 *
 * */

namespace stl_udemy {

/*
 * compAge is a friend of the Person class (see Person.h)
 * Otherwise, it wouldn't be able to access a Person's private fields, like 'age'.
 *
 * The friend declaration appears in a class body and grants a function or another
 * class access to private and protected members of the class where the friend
 * declaration appears.
 * */
bool compAge(const Person &a, const Person &b){
	return a.age < b.age;
}

void sort_vectors_deque_friend () {

	vector<Person> people;

	people.push_back(Person("vasi", 47));
	people.push_back(Person("radu", 29));
	people.push_back(Person("alex", 34));
	people.push_back(Person("caius the hedgehog", 37000));

	cout << "> before sort" << endl;

	for(unsigned int i = 0; i < people.size(); i++){
		/*
		vasi: 47
		radu: 29
		alex: 34
		caius the hedgehog: 37000
		*/
		people[i].print();
	}

	cout << endl;

	//--------------------------------------------------------------------------------

	// sort works because the '<' operator is overloaded in Person.cpp, compares names
	sort(people.begin(), people.end());

	cout << "> after sort by name *via < operator overload" << endl;

	for(unsigned int i = 0; i < people.size(); i++){
		/*
		alex: 34
		caius the hedgehog: 37000
		radu: 29
		vasi: 47
		*/
		people[i].print();
	}

	cout << endl;

	//--------------------------------------------------------------------------------

	/*
	 * comp:
	 *
	 * comparison function object which returns ​true if the first argument is less than
	 * (i.e. is ordered before) the second.
	 * The signature of the comparison function should be equivalent to the following:
	 *
	 * bool cmp(const Type1 &a, const Type2 &b);
	 *
	 * The signature does not need to have const &, but the function object must not
	 * modify the objects passed to it.
	 *
	 * */

	sort(people.begin(), people.end(), compAge);

	cout << "> after sort by age (via 'comp' function)" << endl;

	for(unsigned int i = 0; i < people.size(); i++){
		/*
		radu: 29
		alex: 34
		vasi: 47
		caius the hedgehog: 37000
		*/
		people[i].print();
	}

	cout << endl;

	//--------------------------------------------------------------------------------

	/*
	 * deque (usually pronounced like "deck") is an irregular acronym of double-ended
	 * queue. Double-ended queues are sequence containers with dynamic sizes that can
	 * be expanded or contracted on both ends (either its front or its back).
	 *
	 * Therefore, they provide a functionality similar to vectors, but with efficient
	 * insertion and deletion of elements also at the beginning of the sequence, and
	 * not only at its end. But, unlike vectors, deques are not guaranteed to store all
	 * its elements in contiguous storage locations: accessing elements in a deque by
	 * offsetting a pointer to another element causes undefined behavior.
	 *
	 * For operations that involve frequent insertion or removals of elements at
	 * positions other than the beginning or the end, deques perform worse and have
	 * less consistent iterators and references than lists and forward lists.
	 * */

	cout << "> deque:" << endl;
	deque<Person> dPeople;

	dPeople.push_back(Person("vasi", 47));
	dPeople.push_back(Person("radu", 29));
	dPeople.push_front(Person("alex", 34));
	dPeople.push_front(Person("caius the hedgehog", 37000));

	for(unsigned int i = 0; i < dPeople.size(); i++){
		/*
		caius the hedgehog: 37000
		alex: 34
		vasi: 47
		radu: 29
		*/
		dPeople[i].print();
	}

}

}





























