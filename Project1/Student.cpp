#include "Student.h"

int Student::count = 0;

int Student::getCount() {
	return count;
}

// default constructor
Student::Student() : Student("no name", 6, 4) {
}

Student::Student(string name, int age, double mark)
	: name(name), age(age), mark(mark) {
	count++;
	//this->name = name;
	//this->age = age;
	//this->mark = mark;
}

//Student::Student(const Student& student) {
//}

Student::~Student() {
	//cout << "calling destructor" << endl;
	//delete[] mark;
	count--;
}

double Student::getMark() {
	return mark;
}

string Student::getName() {
	return name;
}

int Student::getAge() {
	return age;
}

void Student::setMark(int mark) {
	if (mark < MAX_MARK && mark > MIN_MARK)
	{
		this->mark = mark;
	}
}

void Student::setAge(int age) {
	if (age > MIN_AGE && age < MAX_AGE)
	{
		this->age = age;
	}
}

string Student::convert() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", mark = " + to_string(mark);
	return s;
}