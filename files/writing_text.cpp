#include <iostream>
#include <fstream>
#include "exercises.h"
using namespace std;

namespace files{

void writing_text(){
	char const * fileName = "files/text.txt";
	ofstream outFile;

	outFile.open(fileName);

	if(outFile.is_open()){
		outFile << "hello" << endl;
	}
	else {
		cout << "can not open " << fileName << endl;
	}

	writing_text_exercise();

}

}
