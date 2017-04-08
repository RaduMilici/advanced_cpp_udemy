#include <iostream>
#include <vector>
#include "exercises.h"
using namespace std;

namespace stl_udemy{

void vectors(){
	/*
	 * http://www.cplusplus.com/reference/vector/vector/
	 *
	 * Vectors are sequence containers representing arrays that can change in size.
	 * Just like arrays, vectors use contiguous storage locations for their elements,
	 * which means that their elements can also be accessed using offsets on regular
	 * pointers to its elements, and just as efficiently as in arrays.
	 * But unlike arrays, their size can change dynamically, with their storage
	 * being handled automatically by the container.
	 *
	 * Compared to the other dynamic sequence containers (deques, lists and
	 * forward_lists), vectors are very efficient accessing its elements
	 * (just like arrays) and relatively efficient adding or removing elements from
	 * its end.
	 * For operations that involve inserting or removing elements at positions
	 * other than the end, they perform worse than the others, and have less consistent
	 * iterators and references than lists and forward_lists.
	 * */

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
