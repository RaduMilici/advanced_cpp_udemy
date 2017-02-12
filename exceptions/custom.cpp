#include <iostream>

// !!!
#include <exception>
// !!!

using namespace std;

namespace exceptions{

//------------------------------------------------------------------------------
class MyException: public exception{
public:
	virtual const char* what() const throw(){
		return "something bad happened, throwing custom exception";
	}
};
//------------------------------------------------------------------------------
class CustomTest{
public:
	void goes_wrong() /*throw()*/{ // means it will NOT throw an exception
		throw MyException();
	}
};
//------------------------------------------------------------------------------

void custom(){

	cout << "custom" << endl;

	CustomTest test;

	try{
		test.goes_wrong();
	}
	catch(MyException &e){
		cout << e.what() << endl; // something bad happened
	}


}

}
