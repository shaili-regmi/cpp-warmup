// Shaili Regmi
// 2/24/2021

#define _USE_MATH_DEFINES

#include "circle.h"
#include <cmath>
#include <math.h>
using namespace std;

// your code here
Circle::Circle() // default constructor
{
	radius = 0;
}

Circle::Circle(int r) // constructor
{
	radius = r;
}

Circle::Circle(const Circle& circle) // copy constructor
{
	radius = circle.radius;
}

Circle& Circle::operator = (const Circle& circle) // assignment operator
{
	radius = circle.radius;
	return *this;
}

std::ostream& operator<<(std::ostream& output, const Circle& circle) // output stream operator
{
	output << circle.radius;
	return output;
}

Circle& Circle::operator + (const Circle& circle1) // add operator
{
	Circle circle2;
	circle2.radius = this->radius + circle1.radius;
	return circle2;
}

int Circle::getRadius() // accessor
{
	return radius;
}

void Circle::setRadius(int r) // setter
{
	radius = r;
}

float Circle::computeArea() // method for computing area
{	
	return (M_PI * (pow (radius, 2)));
}

Circle::~Circle() // destructor
{
}
