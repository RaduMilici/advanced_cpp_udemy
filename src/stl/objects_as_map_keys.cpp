#include <iostream>
#include <map>
#include "Person.h"
using namespace std;
using namespace stl_udemy;

namespace stl_udemy{

void objects_as_map_keys(){

	map<Person, int> friends;
	friends[Person("Vasi", 28)] = 1;
	friends[Person("Alex", 33)] = 2;
	friends[Person("Rusu", 47)] = 3;

	for (
			map<Person, int>::iterator it = friends.begin();
			it != friends.end();
			it++
		){

		/*
		 * prints 2, 3 and 1 because the '<' operator (used to sort elements in the map),
		 * is defined in 'Person' as
		 *
		 * return name < other.name;
		 *
		 * so alphabetically the order is 'Alex' 2, 'Rusu' 3 and 'Vasi' 1
		 */

		cout << it -> second << endl;

	}


}

}
