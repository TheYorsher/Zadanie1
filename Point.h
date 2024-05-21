#pragma once
#ifndef _POINT_HPP_
#define _POINT_HPP_

#include <iostream>
#include "Point.h"

class Point
{
public:
	Point(int x, int y);
	~Point();
	int sumCoordinates(int x, int y);
	void getCoordinates() const;

private:
	int x;
	int y;

};



#endif // ! _POINT_HPP_
