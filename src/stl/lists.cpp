#include <iostream>
#include <list>
using namespace std;

namespace stl_udemy{

void log_list(list<int> l){
	for(list<int>::iterator it = l.begin(); it != l.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
}

//--------------------------------------------------------------------------------

void lists(){

	/*
	 * http://www.cplusplus.com/reference/list/list/
	 *
	 * Lists are sequence containers that allow constant time insert and erase
	 * operations anywhere within the sequence, and iteration in both directions.
	 *
	 * Compared to other base standard sequence containers (array, vector and deque),
	 * lists perform generally better in inserting, extracting and moving elements in
	 * any position within the container for which an iterator has already been obtained,
	 * and therefore also in algorithms that make intensive use of these, like sorting
	 * algorithms.
	 *
	 * The main drawback of lists and forward_lists compared to these other sequence
	 * containers is that they lack direct access to the elements by their position;
	 * For example, to access the sixth element in a list, one has to iterate from a
	 * known position (like the beginning or the end) to that position, which takes
	 * linear time in the distance between these. They also consume some extra memory
	 * to keep the linking information associated to each element (which may be an
	 * important factor for large lists of small-sized elements).
	 */

	list<int> numbers;
	list<int>::iterator it;
	list<int>::iterator eraseIt;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(4);

	it = numbers.begin();
	 /*
	  * http://www.cplusplus.com/reference/list/list/insert/
	  * The container is extended by inserting new elements before
	  * the element at the specified position.
	  */
	numbers.insert(it, 100);
	log_list(numbers); // 100 4 1 2 3

	/*
	 * http://www.cplusplus.com/reference/list/list/erase/
	 * Removes from the list container either a single element
	 * (position) or a range of elements ([first,last)).
	 */

	eraseIt = numbers.begin();
	eraseIt++;
	/*
	 * Returns an iterator pointing to the element that followed
	 * the last element erased by the function call. This is the
	 * container end if the operation erased the last element
	 * in the sequence.
	 * */
	eraseIt = numbers.erase(eraseIt);
	log_list(numbers); // 100 1 2 3

}

}
