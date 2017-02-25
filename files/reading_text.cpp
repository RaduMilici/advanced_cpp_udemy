#include <iostream>
#include <fstream>
#include "exercises.h"
using namespace std;

namespace files {


void reading_text(){
	ifstream inFile; //input file stream

	inFile.open("files/exercises/writing_text_exercise.txt");

	if(inFile.is_open()){
		string line;

		while (!inFile.eof()){
			getline(inFile, line);
			cout << line << endl;
		}

		inFile.close();
	}
	else {
		cout << "can not open file" << endl;
	}
}

}
