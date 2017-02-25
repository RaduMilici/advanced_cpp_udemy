#include <iostream>
using namespace std;

namespace exceptions{

class CanGoWrong{
public:
	CanGoWrong(){
		char* pMemory = new char[999999999999999];
		delete [] pMemory;
	}
};

void standard(){

	try{
		CanGoWrong c;
	}
	catch(bad_alloc &b){
		cout << b.what() << endl; // std::bad_alloc
	}

	cout << "still running" << endl;

}

}
