#include <iostream>
#include <vector>
using namespace std;

namespace stl_udemy{

void two_dimensional_vectors(){

	//vector<int> second (4,100); // four ints with value 100

	// initializes vector with 3 other vectors that contain 4 elements set to 0

	//vector < vector<int> > grid(3, vector<int>(4, 0));

	// a vector of vectors
	vector < vector<int> >
	// called grid
	grid
	//that contains 3 vectors
	(3,
	// of other vectors
	vector<int>
	// that contain 4 elements of 0
	(4, 0));

	for(unsigned int row = 0; row < grid.size(); row++){

		for(unsigned int col = 0; col < grid[row].size(); col++){

			cout << grid[row][col] << flush;

		}

		cout << endl;

	}

}

}
