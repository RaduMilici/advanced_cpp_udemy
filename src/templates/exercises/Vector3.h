/*
 * Vector3.h
 *
 *  Created on: Apr 30, 2017
 *      Author: radu
 */

#ifndef VECTOR3_H_
#define VECTOR3_H_

#include <iostream>
using namespace std;

namespace templates {

template <class T>
class Vector3 {

public:

	Vector3(): posArr{0, 0, 0} { log(); }
	Vector3(T x, T y, T z): posArr{x, y, z} { log(); }
	Vector3(const Vector3 & other) {
		cout << "---" << endl;
		cout << "copy constructor" << endl;
		other.log();
		cout << "---" << endl;
	}
//--------------------------------------------------------------
	void add (Vector3 & other) {
		posArr[0] += other.get('x');
		posArr[1] += other.get('y');
		posArr[2] += other.get('z');
	}
//--------------------------------------------------------------
	T get (char axis) {
		switch (axis) {
		case 'x':
			return posArr[0];
			break;
		case 'y':
			return posArr[1];
			break;
		case 'z':
			return posArr[2];
			break;
		default:
			cout << "Invalid axis " << axis << "!";
			return 0;
		}
	}
//--------------------------------------------------------------
	void log () const {
		cout << "x:"  << posArr[0]
		     << " y:" << posArr[1]
		     << " z:" << posArr[2] << endl;
	}

private:
	T posArr[3];

};

}

#endif /* VECTOR3_H_ */
