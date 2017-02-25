#include <iostream>
using namespace std;

namespace files{

//!!!
//http://stackoverflow.com/a/3318475/6657530
#pragma pack(push, 1)
//!!!

struct Person{
	char name[50];
	int age;
	double weight;
};
//!!!
// turns off packing
#pragma pack(pop)
//!!!

void structs_padding(){

	cout << sizeof(Person) << endl; // 62

}

}
