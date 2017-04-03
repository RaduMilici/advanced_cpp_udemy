#include <iostream>
#include <map>
using namespace std;

namespace stl_udemy{

void multimaps(){

	/*
	 * Multimaps let you store values of duplicate keys.
	 *
	 * The multimap stores pairs of (key, value) where both key
	 * and value can appear several times.
	 * The map<key, set<value>> will only store each value once
	 * for a specific key. To do that, it will have to be able to
	 * compare the values, not just the keys.
	 * */

	multimap<int, string> lookup;

	// both ways to create a pair are valid
	pair<int, string> p1(40, "a");
	pair<int, string> p2(10, "b");
	pair<int, string> p3 = make_pair(30, "c");
	pair<int, string> p4 = make_pair(30, "d");

	lookup.insert(p1);
	lookup.insert(p2);
	lookup.insert(p3);
	lookup.insert(p4);

	//--------------------------------------------------------------------------------

	for(
			multimap<int, string>::iterator it = lookup.begin();
			it != lookup.end();
			it++
		){
		/*
		 * key 30 appears twice
		   10: b
		   30: c
		   30: d
		   40: a
		 */

		cout << it -> first << ": " << it -> second << endl;
	}
	cout << endl;

	//--------------------------------------------------------------------------------

	/*
	 * equal_range
	 *
	 * http://www.cplusplus.com/reference/map/multimap/equal_range/
	 *
	 * Returns the bounds of a range that includes all the elements in
	 * the container which have a key equivalent to the argument.
	 * */

	pair<multimap<int, string>::iterator,
		 multimap<int, string>::iterator> range = lookup.equal_range(30);

	for(
			multimap<int, string>::iterator it = range.first;
			it != range.second;
			it++
		){

		/*
		 30: c
		 30: d
		 */

		cout << it -> first << ": " << it -> second << endl;

	}
	cout << endl;
	//--------------------------------------------------------------------------------

	// in C++ 11 we can use the 'auto' keyword

	auto range2 = lookup.equal_range(30);

	// same loop as above, same result, nut this time with auto
	for(
			multimap<int, string>::iterator it = range2.first;
			it != range2.second;
			it++
		){
		cout << it -> first << ": " << it -> second << endl;
	}





}























}
