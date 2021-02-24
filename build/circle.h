// File: circle.h - Header file for Circle class

#pragma once
#include <iostream>

class Circle
{
public:
	Circle(); // default constructor
	Circle(int r); // constructor
	Circle(const Circle& circle); // copy constructor
	Circle& operator = (const Circle& circle); // assignment operator
	friend std::ostream& operator<<(std::ostream& output, const Circle& circle); // output stream operator
	Circle& operator + (const Circle& circle); // add operator
	int getRadius(); // accessor
	void setRadius(); // setter
	float computeArea(); // compute and return area
	~Circle(); // destructor

private:
	int radius;
};