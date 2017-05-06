/*
 * functors.cpp
 *
 *  Created on: May 1, 2017
 *      Author: radu
 */

#include <iostream>
using namespace std;

// http://stackoverflow.com/a/356993/6657530

//------------------------------------------------------------------------
struct Test {
	virtual ~Test() { };
	virtual bool operator () (string &text) = 0;
};
//------------------------------------------------------------------------
struct MatchTest: public Test {
	bool operator () (string &text) { return text == "lion"; }
};
//------------------------------------------------------------------------
void check(string text, Test &test) {
	if (test(text)) {
		cout << "check passed" << endl;
	}
	else {
		cout << "check failed" << endl;
	}
}
//------------------------------------------------------------------------

namespace pass_func_to_func {

void functors() {

	MatchTest pred;
	string value = "lion";

	cout << pred(value) << endl; // 1

	check("lion", pred); // check passed

}

}




