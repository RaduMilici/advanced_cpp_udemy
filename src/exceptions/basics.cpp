#include <iostream>
#include "exercises.h"
using namespace std;

namespace exceptions{

void might_go_wrong(){

	bool error1 = false;
	bool error2 = true;

	if(error1){
		throw "something went wrong";
	}

	if(error2){
		throw string("something else went wrong");
	}
}

void basics(){

	try{
		might_go_wrong();
	}
	catch(int e){
		cout << "error code: " << e << endl; // error code: 8
	}
	catch(char const * e){
		cout << "error message: " << e << endl; // error code: something went wrong
	}
	catch(string &e){
		cout << "error message: " << e << endl; // error code: something else went wrong
	}

	cout << "program still running" <<endl;

	basics_exercises();

}

}
