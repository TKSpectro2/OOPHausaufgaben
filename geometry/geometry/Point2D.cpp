#include "Point2D.h"



Point2D::Point2D()
{
}


Point2D::~Point2D()
{
}

double Point2D::getX() const
{
	return this->x;
}

double Point2D::getY() const
{
	return this->y;
}

Point2D Point2D::add(const Vector2D &vect) const
{
	Point2D resultPoint;
	resultPoint.x = this->x + vect.getX;
	resultPoint.y = this->y + vect.getY;
	return ;
}

double Point2D::getDistance() const
{
	double result = 0.0;
	//sqrt(betrag a - betrag b);
	return result;
}

void Point2D::moveTo(double newX, double newY)
{
	this->x = newX;
	this->y = newY;
}
