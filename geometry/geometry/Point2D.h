#pragma once
#include"Vector2D.h"
#include"BoundingBox2D.h"

class Point2D
{
public:
	Point2D(double x=0.0, double Y=0.0);
	~Point2D();
	double getX() const;
	double getY() const;
	bool isValid() const;
	//(siehe Teilaufgabe 1)
	Point2D add(const Vector2D &vect) const;
	Vector2D getDifference(const Point2D &other) const;
	double getDistance() const;
	double getDistance(const Point2D &other) const;
	void moveBy(const Vector2D &delta);
	void moveBy(double deltaX, double deltaY);
	void moveTo(double newX, double newY);
	BoundingBox2D getBouSnds() const;
private:
	double x;
	double y;
};

