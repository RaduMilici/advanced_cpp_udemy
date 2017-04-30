/*
 * function_pointers.cpp
 *
 *  Created on: Apr 30, 2017
 *      Author: radu
 */

#include <iostream>
#include <fstream>
using namespace std;

void writeFile( string path, string text, void (*callback)() ) {

	ofstream stream;
	stream.open(path);

	if (stream.is_open()) {

		stream << text << endl;
		stream.close();
		callback();

	}

}

namespace pass_func_to_func {

void print_done() {
	cout << "done writing file" << endl;
}

void function_pointers_exercises() {

	string path = "src/pass_func_to_func/exercises/test.txt";
	string text = "hello world!";
	void (*callback) () = print_done;

	writeFile( path, text, callback );

}

}
