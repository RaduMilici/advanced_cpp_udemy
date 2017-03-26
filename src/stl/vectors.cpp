#include <iostream>
#include <vector>
#include "exercises.h"
using namespace std;

namespace stl_udemy{

void vectors(){

	vector<string> animals;
	cout << endl;

	animals.push_back("cat");
	animals.push_back("wolf");
	animals.push_back("bear");
	//--------------------------------------------------------------------------------

	cout << "size is: " << animals.size() << endl;
	cout << "animals[2] == " << animals[2] << endl; // animals[2] == bear
	cout << endl;

	//--------------------------------------------------------------------------------

	// loop with size()
	for(unsigned int i = 0; i < animals.size(); i++){
		cout << i << ": " << animals[i] << endl;
	}
	cout << endl;

	//--------------------------------------------------------------------------------

	// iterators
	vector<string>::iterator it = animals.begin();
	cout << "iterator it == " << *it << endl;

	it++;
	cout << "it++ == " << *it << endl;

	cout << endl;

	//--------------------------------------------------------------------------------

	// loop with iterators
	for(vector<string>::iterator it = animals.begin();
		it != animals.end();
		it++){

		cout << *it << endl;

	}
	cout << endl;

	//--------------------------------------------------------------------------------

}

}
