#include"Point2D.h"
#include"Vector2D.h"
#include<iostream>

bool testPoint2D()
{
	Point2D point;
	
	return true;
}

bool testVector2D()
{
	Vector2D myVector1;
	Vector2D myVector2(5, 1);

	
	std::cout << myVector2.getX() << " | " << myVector2.getY();

	return true;
}

int main()
{
	testVector2D();


}