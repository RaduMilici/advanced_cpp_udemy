#include <iostream>
#include <vector>
using namespace std;

namespace stl_udemy{

void vectors_memory(){

	vector<double> nums(20); // presize

	unsigned int capacity = nums.capacity();

	cout << "capacity: " << capacity << endl; // capacity: 20
	//--------------------------------------------------------------------------------

	for(int i = 0; i < 10000; i++){

		if(nums.capacity() != capacity){
			capacity = nums.capacity();
			cout << "new capacity is " << capacity << endl;
			/*
			 * capacity increases exponentially

			new capacity is 40
			new capacity is 80
			new capacity is 160
			new capacity is 320
			new capacity is 640
			new capacity is 1280
			new capacity is 2560
			new capacity is 5120
			new capacity is 10240

			*/
		}

		nums.push_back(i);

	}

	//--------------------------------------------------------------------------------



}

}
