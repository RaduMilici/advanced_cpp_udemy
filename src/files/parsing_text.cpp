#include <iostream>
#include <fstream>
using namespace std;
namespace files{

void parsing_text(){
	char const * name = "src/files/exercises/writing_text_exercise.txt";
	ifstream input;

	input.open(name);

	if(!input.is_open()){
		cout << "can not open file " << name << endl;
		return;
	}

	while(!input.eof()){
		string line;
		string name;

		getline(input, line, ':'); // ':' is the delimiter, it will read until this

		input >> name;

		if(!input){
			break;
		}

		cout << name << endl;
	}

	input.close();

}

}
