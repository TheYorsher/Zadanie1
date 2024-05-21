#include "Point.h"
#include <iostream>

Point::Point(int x, int y) : x(x), y(y)
{

}

Point::~Point()
{

}

int Point::sumCoordinates(int x, int y)
{
	std::cout << "Sum of coordinates: " << x + y << std::endl;
	return 0;
}

void Point::getCoordinates() const
{
	std::cout << "Point coordinates: x = " << x << " , y = " << y << std::endl;
}

