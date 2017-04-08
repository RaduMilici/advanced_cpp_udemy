#include <iostream>
#include <vector>
#include <map>
#include "Person.h"
using namespace std;

namespace stl_udemy {

void complex_data_structures () {

	map<string, vector<int>> scores;

	scores["radu"].push_back(29);
	scores["radu"].push_back(5);
	scores["rusu"].push_back(47);
	scores["rusu"].push_back(74);

	for(
			map<string, vector<int>>::iterator it = scores.begin();
			it != scores.end();
			it++
		){

		string name = it -> first;
		vector<int> scoreList = it -> second;

		cout << name << ": " << flush;

		for(unsigned int i = 0; i < scoreList.size(); i++){
			cout << scoreList[i] << " " << flush;
		}

		cout << endl;
	}
	//--------------------------------------------------------------------------------

}

}
