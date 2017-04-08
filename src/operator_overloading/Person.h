#ifndef SRC_OPERATOR_OVERLOADING_PERSON_H_
#define SRC_OPERATOR_OVERLOADING_PERSON_H_

namespace op_ov {

class Person {
public:
	virtual ~Person();
	Person();
	Person(int id, std::string name);

	void print();
	const Person & operator = (const Person & other);

private:
	int id;
	std::string name;
};

} /* namespace op_ov */

#endif /* SRC_OPERATOR_OVERLOADING_PERSON_H_ */
