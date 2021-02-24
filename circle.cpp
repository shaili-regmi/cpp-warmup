#include "circle.h"

// your code here
class Circle
{
	public
	{
		Circle()
		{
			radius = 0;
		}

		Circle(int r)
		{
			radius = r;
		}

		Circle(const Circle &obj)
		{
			radius = new int;
			*radius = *obj.radius;
		}
	}

	private
	{
		int radius;
	}
};
