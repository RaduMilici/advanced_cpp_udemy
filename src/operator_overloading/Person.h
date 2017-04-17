#ifndef SRC_OPERATOR_OVERLOADING_PERSON_H_
#define SRC_OPERATOR_OVERLOADING_PERSON_H_

namespace op_ov {

class Person {
public:
	Person();
	Person(const Person & other); // copy constructor
	Person(int id, std::string name);
	virtual ~Person();

	void print();
	const Person & operator = (const Person & other);

private:
	int id;
	std::string name;
	friend std::ostream & operator << (std::ostream & out, const Person & other) {
		out << "from operator overload: " << other.id << ": " << other.name;
		return out;
	}
};

} /* namespace op_ov */

#endif /* SRC_OPERATOR_OVERLOADING_PERSON_H_ */
