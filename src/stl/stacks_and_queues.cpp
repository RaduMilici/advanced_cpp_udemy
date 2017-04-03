#include <iostream>
#include <stack>
#include <queue>
#include "Person.h"
using namespace std;

namespace stl_udemy {

void stacks_and_queues () {

	/*
	 * http://www.cplusplus.com/reference/stack/stack/
	 *
	 * Stacks are a type of container adaptor, specifically designed to
	 * operate in a LIFO context (last-in first-out), where elements are
	 * inserted and extracted only from one end of the container.
	 * */

	stack<Person> pStack;
	pStack.push(Person("radu", 29));      // copy constructor running
	pStack.push(Person("sauron", 47000)); // copy constructor running
	pStack.push(Person("ps", 4));         // copy constructor running
	//--------------------------------------------------------------------------------
	Person p1 = pStack.top();             // copy constructor running
	p1.print();                           // ps: 4
	pStack.pop();
	cout << endl;
	//--------------------------------------------------------------------------------
	/*
	 * !!! THIS IS WRONG !!!
	 */
	Person &p2 = pStack.top(); // assigns as a reference

	pStack.pop();              // when pop, object is removed and discarded

	p2.print();                // this is bad practice and unreliable because
	                           // p2 could now point at anything
	cout << endl;
	/*
	 * !!! THIS IS WRONG !!!
	 */
	//--------------------------------------------------------------------------------
	//add some elements again
	pStack.push(Person("vasilasu", 47)); // copy constructor running
	pStack.push(Person("rusu", 69));         // copy constructor running
	while (pStack.size() > 0) {

		Person &p = pStack.top();
		p.print();
		pStack.pop();

		/*
		 * Last In First Out is visible here
		rusu: 69
		vasilasu: 47
		radu: 29
		*/

	}
	cout << endl;
	//--------------------------------------------------------------------------------
	/*
	 * http://www.cplusplus.com/reference/queue/queue/
	 *
	 * queues are a type of container adaptor, specifically designed to operate in a
	 * FIFO context (first-in first-out), where elements are inserted into one end
	 * of the container and extracted from the other.
	 * */

	queue<Person> pQueue;
	pQueue.push(Person("geralt", 99));      // copy constructor running
	pQueue.push(Person("vesemir", 145));    // copy constructor running
	pQueue.push(Person("eskel", 120));      // copy constructor running
	pQueue.push(Person("lambert", 110));    // copy constructor running

	cout << endl << "back of the queue " << flush;
	pQueue.back().print(); // lambert: 110
	cout << endl;

	while (pQueue.size() > 0) {

		Person &p = pQueue.front();
		p.print();
		pQueue.pop();

		/*
		 * First In First Out is visible here
		geralt: 99
		vesemir: 145
		eskel: 120
		lambert: 110
		*/

	}

	cout << endl;
	//--------------------------------------------------------------------------------

}

}
