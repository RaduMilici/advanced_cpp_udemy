#include <iostream>
#include <vector>
#include "Person.h"
using namespace std;
using namespace stl_ex;

namespace stl_udemy{

void vectors_exercises(){

	vector<Person> people;
	vector<string> names = {"radu", "vasi", "toto"};
	names.push_back("caius");
	names.push_back("alex");
	names.push_back("andreea");
	names.push_back("rusu");
	cout << endl;

	//--------------------------------------------------------------------------------

	for(unsigned int i = 0; i < names.size(); i++){
		Person person(names[i]);
		cout << i << " created Person with name: " << names[i] << endl;
		people.push_back(person);
	}
	cout << endl;

	//--------------------------------------------------------------------------------

	vector<Person>::iterator it = people.begin();

	while(it != people.end()){
		cout << "looping using iterator: " << it -> name << endl;
		it++;
	}
	cout << endl;

	//--------------------------------------------------------------------------------




}

}
