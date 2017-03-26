#include <iostream>
#include <vector>
#include "Person.h"
using namespace std;
using namespace stl_ex;

vector<string>* populate_vector(vector<string> &empty);
void log_and_shrink(vector <string> &vec);
//--------------------------------------------------------------------------------
namespace stl_udemy{

void vector_iterators_memory_exercises(){

	vector<string> vec;
	populate_vector(vec);
	log_and_shrink(vec);
	cout << vec.capacity() << endl;

}

}
//--------------------------------------------------------------------------------
vector<string>* populate_vector(vector<string> &empty){
	int size = 100;
	char c = 35;

	for(int i = 0; i < size; i++){

		c++;
		empty.push_back( string(1, c) );

	}

	return &empty;
}
//--------------------------------------------------------------------------------
void log_and_shrink(vector<string> &vec){
	cout << vec.capacity() << endl;
	vec.shrink_to_fit();
}
//--------------------------------------------------------------------------------

