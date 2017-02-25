#include <iostream>
#include <fstream>
using namespace std;

namespace files{

void writing_text_exercise(){

	ofstream outFile;
	string friends [] = {"Vasi", "Alex", "Caius", "Rusu", "Andreea", "Dani", "Sosi"};
	int length = sizeof(friends) / sizeof(string) - 1;

	outFile.open("src/files/exercises/writing_text_exercise.txt");

	if(outFile.is_open()){

		for(int i = 0; i < 50; i++){
			outFile << i << " friend name:" << friends[i % length] << endl;
		}

	}
}

}
