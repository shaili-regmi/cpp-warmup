#include "circle.h"

// your code here
class Circle
{
	public
	{
		Circle()
		{
			radius = 0f;
		}

		Circle(float input_radius)
		{
			radius = input_radius;
		}

		Circle(const Circle &obj)
		{
			radius = new float;
			*radius = *obj.radius;
		}
	}

	private
	{
		float radius;
	}
};
