#include "Vector2D.h"
#include<math.h>



Vector2D::Vector2D(double deltax, double deltay)
	:deltaX(deltax),deltaY(deltay)
{
}


Vector2D::~Vector2D()
{
}

double Vector2D::getX() const
{
	return this->deltaX;
}

double Vector2D::getY() const
{
	return this->deltaY;
}

Vector2D Vector2D::add(const Vector2D &other) const
{
	Vector2D resultVector;
	resultVector.deltaX = this->deltaX + other.deltaX;
	resultVector.deltaY = this->deltaY + other.deltaY;

	return resultVector;
}

//subtrahiert von dem Vektor den übergebenen Vektor
Vector2D Vector2D::subtract(const Vector2D &other) const
{
	Vector2D resultVector;
	resultVector.deltaX = this->deltaX - other.deltaX;
	resultVector.deltaY = this->deltaY - other.deltaY;

	return resultVector;
}

double Vector2D::getLength() const
{
	
	return sqrt((this->deltaX * this->deltaX) + (this->deltaY * this->deltaY));
}

double Vector2D::getOrientation() const
{
	//TODO
}

double Vector2D::multiply(const Vector2D &other) const
{
	return 0.0;
}
