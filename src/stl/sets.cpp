#include <iostream>
#include <set>
#include "Person.h"
using namespace std;

namespace stl_udemy{

void sets(){

	/*
	 * Sets are containers that store unique elements following a specific order.
	 * In a set, the value of an element also identifies it (the value is itself
	 * the key, of type T), and each value must be unique. The value of the
	 * elements in a set cannot be modified once in the container (the elements
	 * are always const), but they can be inserted or removed from the container.
	 * */

	set<Person> people;
	Person radu("radu", 29);
	Person sauron("sauron", 47000);
	people.insert(radu);
	people.insert(sauron);
	//--------------------------------------------------------------------------------
	for(
			set<Person>::iterator it = people.begin();
			it != people.end();
			it++
		){

		it -> print();

	}
	cout << endl;
	//--------------------------------------------------------------------------------
	// ways to find elements in a set

	//find
	set<Person>::iterator f = people.find(radu);

	if (f != people.end()) {
		f -> print();
	}
	cout << endl;

	// count
	/*
	 * Searches the container for elements equivalent to val and returns the number
	 * of matches.
	 * Because all elements in a set container are unique, the function can only
	 * return 1 (if the element is found) or zero (otherwise).
	 * */
	if (people.count(radu)) {
		radu.print();
	}

	if (people.count(sauron)) {
		sauron.print();
	}
	cout << endl;
	//--------------------------------------------------------------------------------


}

}
