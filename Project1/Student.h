#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {

	string name;
	int age;
	double mark;

	static int count;

public:

	static const int MAX_MARK = 10;
	static const int MIN_MARK = 0;

	static const int MAX_AGE = 100;
	static const int MIN_AGE = 0;

	Student();
	Student(string name, int age, double mark);

	//Student(const Student& student);

	~Student();

	double getMark();
	string getName();
	int getAge();

	void setMark(int mark);
	void setAge(int age);

	static int getCount();

	string convert();
};