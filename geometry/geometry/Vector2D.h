#pragma once
class Vector2D
{
public:
	Vector2D();
	Vector2D(double x, double y);
	~Vector2D();
	double getX() const;
	double getY() const;
	Vector2D add(const Vector2D &other) const;
	Vector2D subtract(const Vector2D &other) const;
	double getLength() const;
	double getOrientation() const;
	double multiply(const Vector2D &other) const;
private:
	double x;
	double y;
};

