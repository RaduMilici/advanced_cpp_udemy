#include <iostream>
#include <map>
#include "Person.h"
using namespace std;
using namespace stl_udemy;

namespace stl_udemy{

void objects_as_map_keys(){

	map<Person, int> people;
	people[Person("Vasi", 28)] = 1;
	people[Person("Alex", 33)] = 2;
	people[Person("Rusu", 47)] = 3;

	for (
			map<Person, int>::iterator it = people.begin();
			it != people.end();
			it++
		){

		cout << it -> second << endl;

	}


}

}
