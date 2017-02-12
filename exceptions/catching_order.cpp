#include <iostream>

// !!!
#include <exception>
// !!!

using namespace std;

namespace exceptions{

void goes_wrong(){

	bool error1 = true;
	bool error2 = false;

	if(error1){
		throw bad_alloc();
	}

	if(error2){
		throw exception();
	}

}

void catching_order(){
	cout << "catching_order" << endl;

	try{
		goes_wrong();
	}
	catch(exception &e){
		cout << "exception" << endl;
		cout << e.what() << endl;
	}
	catch(bad_alloc &e){
		cout << "bad_alloc" << endl;
		cout << e.what() << endl;
	}

	/*
	 * !!!
	 *  will throw 'exception' and NOT 'bad_alloc'
	 *  because 'bad_alloc' is a subclass of 'exception'
	 *  even though we throw 'bad_alloc'.
	 *
	 *  TO FIX THIS, CATCH CHILD CLASSES BEFORE THEIR PARENT CLASSES
	 * !!!
	 * */
}

}
