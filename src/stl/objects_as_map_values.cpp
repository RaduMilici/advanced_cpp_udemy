#include <iostream>
#include <map>
#include "Person.h"
using namespace std;
using namespace stl_udemy;

//--------------------------------------------------------------------------------

namespace stl_udemy{

void objects_as_map_values(){

	map<int, Person> people;

	/*
	 * !!!
	 * DOING THIS REQUIRES A DEFAULT PARAMETERLESS CONSTRUCTOR
	 * !!!
	 */
	people[0] = Person("Vasi", 28);
	people[1] = Person("Alex", 33);
	people[2] = Person("Rusu", 47);

	//pair<int, Person>caius(3, Person("Caius", 30));
	//people.insert(caius);

	for(
			map<int, Person>::iterator it = people.begin();
			it != people.end();
			it++
	){
		/*
		 0: Vasi: 28
		 1: Alex: 33
		 2: Rusu: 47
		 */
		cout << it -> first << ": " << flush;
		//it -> second.print();
	}

}

}
