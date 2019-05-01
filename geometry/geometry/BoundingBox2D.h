#pragma once
class BoundingBox2D
{
public:
	BoundingBox2D();
	~BoundingBox2D();
	double getWidth() const;
	double getHeight() const;
	void uniteWith(const BoundingBox2D &other);
private:
	double x;
	double y;
};

