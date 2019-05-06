#include "Line2D.h"



Line2D::Line2D(const Point2D& p1, const Point2D& p2)
	:p_start(p1.getX(),p1.getY()), p_End(p2.getX(),p2.getY())
{
}


Line2D::~Line2D()
{
}

Point2D Line2D::getStart() const
{
	return Point2D(this->p_start.getX(), this->p_start.getY());
}

Point2D Line2D::getEnd() const
{
	return Point2D(this->p_End.getX(), this->p_End.getY());
}

Point2D Line2D::getPointAt(double offset) const
{
	return Point2D();
}

double Line2D::getLength() const
{
	
	return p_start.getDistance(this->p_End);

}

Line2D Line2D::add(const Vector2D& vect) const
{


	return Line2D(this->p_start, this->p_End.add(vect));
}

Vector2D Line2D::getVector() const
{
	return p_start.getDifference(p_End);
}

void Line2D::moveBy(const Vector2D& offs)
{
	this->p_start.moveBy(offs);
	this->p_End.moveBy(offs);
}

void Line2D::moveBy(double deltaX, double deltaY)
{
	this->p_start.moveBy(deltaX, deltaY);
	this->p_End.moveBy(deltaX, deltaY);
}

double Line2D::getDistance(const Line2D& other) const
{
	return this->p_start.getDistance(other.p_start),this->p_End.getDistance(other.p_End);
}
//TODO
/*double Line2D::getDistance(const Point2D& other) const
{
	double m = (this->p_End.getDistance(other) + this->getDistance(other) + this->p_End.getDistance(this->p_start)) / 2;

	return sqrt(m*(m- this->p_End.getDistance(other))*(m- this->getDistance(other))*(m- this->p_End.getDistance(this->p_start)));
}*/ 
