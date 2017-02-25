#include <iostream>
#include <fstream>
#include "files.h"
using namespace std;

const char * file_name = "files/read_write_binary_files.bin";
//--------------------------------------------------------------------------------
void write(){
	files::Person person = {"Frodo", 220, 420.0};
	ofstream out_file;

	out_file.open(file_name, ios::binary);

	if(out_file.is_open()){

		//old style
		//out_file.write((char *)&person, sizeof(files::Person));

		//new style
		/*
		 * http://en.cppreference.com/w/cpp/language/reinterpret_cast
		 *
		 * reinterpret_cast < new_type > ( expression )
		 *
		 * the reinterpret_cast expression does not compile to any CPU instructions.
		 * It is purely a compiler directive which instructs the compiler to treat
		 * the sequence of bits (object representation) of expression as if it
		 * had the type new_type.
		 * */
		out_file.write(reinterpret_cast<char *>(&person), sizeof(files::Person));

		out_file.close();
	}
	else {
		cout << "could not open file " << file_name << endl;
	}
}
//--------------------------------------------------------------------------------
void read(){
	ifstream in_file;
	files::Person other = {};

	in_file.open(file_name, ios::binary);

	if(in_file.is_open()){

		// old way works too
		in_file.read((char *)&other, sizeof(files::Person));

		// new way
		//in_file.read(reinterpret_cast<char *>(&other), sizeof(files::Person));

		in_file.close();
	}
	else {
		cout << "could not read file " << file_name << endl;
	}

	cout << "name " << other.name << endl;     // name Frodo
	cout << "age " << other.age << endl;       // age 220
	cout << "weight " << other.weight << endl; // weight 42
}
//--------------------------------------------------------------------------------

namespace files{

void read_write_binary_files(){
	write();
	read();
}

}
