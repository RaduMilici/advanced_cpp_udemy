#include <iostream>
using namespace std;

namespace exceptions{

class CustomError{
public:
	CustomError(string error_text){
		this -> error_text = error_text;
	}
	string error_text;
};

void throw_custom_error(){
	bool shouldThrow = true;
	CustomError err("just some sample text");

	if(shouldThrow)
		throw err;
}

void basics_exercises(){

	cout << "basics_exercises" << endl;

	try{
		throw_custom_error();
	}
	catch(CustomError &e){
		cout << e.error_text << endl; //just some sample text
	}

}

}
