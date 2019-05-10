#include"BoundingBox2D.h"
#include"Point2D.h"


BoundingBox2D::BoundingBox2D()
{
}

BoundingBox2D::BoundingBox2D(Point2D* start, double width, double height)
	:StartPoint(start),Width(width),Height(height)
{
}



BoundingBox2D::~BoundingBox2D()
{
}

double BoundingBox2D::getWidth() const
{
	return this->Width;
}

double BoundingBox2D::getHeight() const
{
	return this->Height;
}

Point2D* BoundingBox2D::getStartPoint() const
{
	return &Point2D();
}
