/*
 * classes.cpp
 *
 *  Created on: Apr 30, 2017
 *      Author: radu
 */

#include <iostream>
#include "Vector3.h"
using namespace std;


namespace templates {

void classes_exercises () {

	Vector3 <int> v1 (2, 9, 5);
	Vector3 <int> v2 (1, 2, 3);
	v1.add(v2);
	v1.log(); // x:3 y:11 z:8

}

}



