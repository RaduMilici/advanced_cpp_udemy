#include <iostream>
#include <map>
using namespace std;

namespace stl_udemy{

void maps(){

	map<string, int> obj;

	obj["a"] = 1;
	obj["b"] = 2;
	obj["c"] = 3;

	cout << obj["a"] << endl; // 1
	cout << obj["d"] << endl; // not user defined but logs 0 and adds it to map.
	cout << endl;

	pair<string, int> addToMap("f", 4);
	// OR use make_pair("f", 4)
	obj.insert(addToMap);

	/*
	 * to check if key exists, use find.
	 * either returns pointer to key if exists, or to end() if not
	 */
	if(obj.find("e") != obj.end()){
		cout << "key exists" << endl;
	}
	else {
		cout << "key does not exist" << endl;
	}
	cout << endl;

	//--------------------------------------------------------------------------------
	for(
			map<string, int>::iterator it = obj.begin();
			it != obj.end();
			it++
	){
		/*
		 a:1
		 b:2
		 c:3
		 d:0
		 f:4
		 */
		cout << it -> first << ":" << it -> second << endl;
	}
	cout << endl;
	//--------------------------------------------------------------------------------
	// stored using pairs
	for(
			map<string, int>::iterator it = obj.begin();
			it != obj.end();
			it++
	){
		/*
		 pair: a:1
		 pair: b:2
		 pair: c:3
		 pair: d:0
		 pair: f:4
		 */
		pair<string, int> p = *it;
		cout << "pair: " << p.first << ":" << p.second << endl;
	}
	//--------------------------------------------------------------------------------

}

}
