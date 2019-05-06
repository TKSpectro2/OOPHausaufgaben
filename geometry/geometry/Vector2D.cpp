#include "Vector2D.h"
#include<cmath>
#include<math.h>



Vector2D::Vector2D()
{
	this->x = 0.0;
	this->y = 0.0;
}

Vector2D::Vector2D(double x, double y)
{
	this->x = x;
	this->y = y;
}

Vector2D::~Vector2D()
{
}

double Vector2D::getX() const
{
	return this->x;
}

double Vector2D::getY() const
{
	return this->y;
}

Vector2D Vector2D::add(const Vector2D &other) const
{
	Vector2D resultVector;
	resultVector.x = this->x + other.x;
	resultVector.y = this->y + other.y;

	return resultVector;
}

//subtrahiert von dem Vektor den übergebenen Vektor
Vector2D Vector2D::subtract(const Vector2D &other) const
{
	Vector2D resultVector;
	resultVector.x = this->x - other.x;
	resultVector.y = this->y - other.y;

	return resultVector;
}

double Vector2D::getLength() const
{
	
	return sqrt((this->x * this->x) + (this->y * this->y));
}

double Vector2D::getOrientation() const
{
	//TODO

	return 0.0;
}

double Vector2D::multiply(const Vector2D &other) const
{
	return 0.0;
}
