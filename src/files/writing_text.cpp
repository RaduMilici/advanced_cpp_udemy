#include <iostream>
#include <fstream>
#include "exercises.h"
using namespace std;

namespace files{

void writing_text(){
	char const * fileName = "src/files/text.txt";
	ofstream outFile; //output file stream

	outFile.open(fileName);

	if(outFile.is_open()){
		outFile << "hello" << endl;
		outFile.close();
	}
	else {
		cout << "can not open " << fileName << endl;
	}

	writing_text_exercise();

}

}
