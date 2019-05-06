#pragma once
#include "Point2D.h"
#include<math.h>
class Line2D
{
public:
	Line2D(const Point2D& p1,const Point2D& P2);
	~Line2D();
	Point2D getStart() const;
	Point2D getEnd() const;
	Point2D getPointAt(double offset) const; // TODO
	double getLength() const;
	Line2D add(const Vector2D& vect) const;
	Vector2D getVector() const;
	void moveBy(const Vector2D& offs);
	void moveBy(double deltaX, double deltaY);
	double getDistance(const Line2D& other) const; // muss fragen ob es so richtig ist
	double getDistance(const Point2D& other) const;
protected:
	Point2D p_start, p_End;
};

