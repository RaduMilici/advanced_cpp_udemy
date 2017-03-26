/*
 * Person.h
 *
 *  Created on: Mar 12, 2017
 *      Author: radu
 */

#ifndef SRC_STL_EXERCISES_PERSON_H_
#define SRC_STL_EXERCISES_PERSON_H_

#include <iostream>

namespace stl_ex{

class Person{
public:
	Person(std::string name){ this -> name = name; }
	std::string name;
};

}


#endif /* SRC_STL_EXERCISES_PERSON_H_ */
