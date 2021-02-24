#define _USE_MATH_DEFINES

#include "circle.h"
#include <cmath>
#include <math.h>
using namespace std;

// your code here
	Circle::Circle() 
	{
		radius = 0;
	}

	Circle::Circle(int r) 
	{
		radius = r;
	}

	Circle::Circle(const Circle& circle) 
	{
		radius = circle.radius;
	}

	Circle& Circle::operator = (const Circle& circle)
	{
		radius = circle.radius;
		return *this;
	}

	std::ostream& operator<<(std::ostream& output, const Circle& circle)
	{
		output << circle.radius;
		return output;
	}

	Circle& Circle::operator + (const Circle& circle1)
	{
		Circle circle2;
		circle2.radius = this->radius + circle1.radius;
		return circle2;
	}

	int Circle::getRadius()
	{
		return radius;
	}

	void Circle::setRadius(int r)
	{
		radius = r;
	}

	float Circle::computeArea()
	{	
		return (M_PI * (pow (radius, 2)));
	}

	Circle::~Circle()
	{

	}
