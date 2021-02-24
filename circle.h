// Name: Shaili Regmi
// Date: 2/24/2021

#pragma once
#include <iostream>

// your code here
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
	void setRadius(int r); // setter
	float computeArea(); // compute and return area
	~Circle(); // destructor

private:
	int radius;
};

