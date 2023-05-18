/*!
	\file
	\brief Файл реализации описание классов Фигур
*/

#include "shapes.h"

void Point2::setXY(int x, int y)
{
	_x = x;
	_y = y;
}

int Point2::getX()
{
	return _x;
}

int Point2::getY()
{
	return _y;
}

Line::Line(Point2 p1, Point2 p2) : _p1(p1), _p2(p2)
{
    create();
}

bool Line::create()
{
    return false;
}

Rectangle::Rectangle(Point2 p1, Point2 p2) : _p1(p1), _p2(p2)
{
    create();
}

bool Rectangle::create()
{
    return false;
}

BaseShape::~BaseShape()
{
}
