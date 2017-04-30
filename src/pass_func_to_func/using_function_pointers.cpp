/*
 * using_function_pointers.cpp
 *
 *  Created on: Apr 30, 2017
 *      Author: radu
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool match ( string test ) { return test.size() == 3; }

int count_strings ( vector<string> &texts, bool (*match)(string test) ) {

	int results = 0;

	for (unsigned int i = 0; i < texts.size(); i++) {
		results += (int)match(texts[i]);
	}

	return results;

}

namespace pass_func_to_func {

void using_function_pointers () {

	vector <string> texts;

	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("one");
	texts.push_back("three");
	texts.push_back("two");

	// http://www.cplusplus.com/reference/algorithm/count_if/
	int matches = count_if(texts.begin(), texts.end(), match);
	cout << matches << endl;  // 5

	int matches2 = count_strings(texts, match);
	cout << matches2 << endl; // 5

}

}
