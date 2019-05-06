#include "Line2D.h"

#include"Point2D.h"

Line2D::Line2D(const Point2D& p1, const Point2D& p2)
	:Point1(p1.getX(), p1.getY()), Point2(p2.getX(),p2.getY())
{
}


Line2D::~Line2D()
{
}
