/*
 * classes.cpp
 *
 *  Created on: Apr 23, 2017
 *      Author: radu
 */

#include <iostream>
#include "Test.h"
using namespace std;


namespace templates {

void classes () {

	Test<string> t("radu"); // constructor called
	t.print(); // print called: radu

}

}



