#include "Point2D.h"
#include<cmath>
#include<math.h>


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
	resultPoint.x = this->x + vect.getX();
	resultPoint.y = this->y + vect.getY();
	return ;
}

Vector2D Point2D::getDifference(const Point2D &other) const
{
	//Set funktionen werden eigentlich gebraucht
	Vector2D resultVector;

	resultVector.x = this->x - other.x;
	resultVector.y = this->y - other.y;

	return resultVector;
}

double Point2D::getDistance() const
{
	double resultDistance = 0.0;

	sqrtf(powf(this->x - 0, 2) + powf(this->y - 0, 2));

	return resultDistance;
}

double Point2D::getDistance(const Point2D &other) const
{
	double resultDistance = 0.0;

	sqrtf(powf(this->x - other.getX(), 2)+powf(this->y - other.getY(), 2));

	return resultDistance;
}

void Point2D::moveBy(const Vector2D &delta)
{
	this->x += delta.getX();
	this->y += delta.getY();
}

void Point2D::moveBy(double deltaX, double deltaY)
{
	this->x += deltaX;
	this->y += deltaY;
}

void Point2D::moveTo(double newX, double newY)
{
	this->x = newX;
	this->y = newY;
}
