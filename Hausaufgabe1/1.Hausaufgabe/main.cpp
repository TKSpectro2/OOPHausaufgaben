#include"Line2D.h"
#include"Point2D.h"
#include"Vector2D.h"

#include<iostream>

using namespace std;

void outputPoint(Point2D point)
{
	cout << "x: " << point.getX() << " | y:" << point.getY() << endl;

	return;
}

void outputPoint(Point2D* point)
{
	cout << "x: " << point.getX() << " | y:" << &point.getY() << endl;

	return;
}

void outputLine(Line2D line)
{
	cout << endl << "\tPoint1: ";
	outputPoint(line.getStart());
	cout << "\tPoint2: ";
	outputPoint(line.getEnd());
	cout << endl;
	return;
}

void outputVector(Vector2D vector)
{
	cout << "x: " << vector.getX() << " | y: " << vector.getY() << endl;
	return;
}

void vectorTest()
{
	cout << "| Start VectorTest |" << endl;
	Vector2D vector1(4, 6);
	Vector2D vector2(1, 1);

	cout << "getX() Test: " << vector1.getX() << endl;
	cout << "getY() Test: " << vector1.getY() << endl;
	cout << "add(vector) Test: ";
		outputVector(vector1.add(vector2));
	cout << "substract() Test: ";
		outputVector(vector1.subtract(vector2));
	cout << "getLength() Test: " << vector1.getLength();
	return;
}

void pointTest()
{
	cout << "| Start PointTest |" << endl;
	Point2D point0(5, 2);
	Point2D point1(0, 1);
	Point2D point2(20, 21);
	Vector2D vector1(4, 6);
	Vector2D vector2(1, 1);

	cout << "getX() Test: " << point0.getX() << endl;

	cout << "getY() Test: " << point0.getY() << endl;

	cout << "add(vector) Test: ";
	outputPoint(point0.add(vector1));

	cout << "getDifference(point) Test: ";
	outputVector(point0.getDifference(point1));

	cout << "getDistance() Test: " << point0.getDistance() << endl;

	cout << "getDistance(point) Test: " << point0.getDistance(point1) << endl;

	cout << "moveBy(vector) Test: ";
	point0.moveBy(vector2);
	outputPoint(point0);

	cout << "moveBy(x, y) Test: ";
	point0.moveBy(1, 1);
	outputPoint(point0);

	cout << "moveTo() Test: ";
	point0.moveTo(5, 2);
	outputPoint(point0);

	cout << "getBounds() Test: " << endl;

	cout << "| End VectorTest |";
	return;
}

void lineTest()
{
	cout << "| Start LineTest |" << endl;

	Line2D line1(Point2D(4, 4), Point2D(8, 4));
	Line2D line2(Point2D(2, 2), Point2D(6, 2));
	Vector2D vector1(4, 6);
	Point2D point1(9, 9);
	
	cout << "getStart() Test: ";
	outputPoint(line1.getStart());

	cout << "getEnd() Test: ";
	outputPoint(line1.getEnd());

	//TODO
	//cout << "getPointAt(offset) Test: ";
	//outputPoint(line1.getPointAt(4));

	cout << "getLength() Test: " << line1.getLength() << endl;

	line1 = line1.add(vector1);
	cout << "add(vector) Test: ";
	outputLine(line1);

	cout << "getVector() Test: ";
	outputVector(
	line1.getVector());

	cout << "| End LineTest |";
	return;
}

void BoundingBoxTest()
{
	BoundingBox2D box(&Point2D(0,0),4, 2);
	cout << "getWidth() Test: " << box.getWidth() << endl;

	cout << "getHeight() Test: " << box.getHeight() << endl;

	cout << "getStartPoint() Test: ";
	outputPoint(box.getStartPoint());
		
	return;
}

int main()
{

	//lineTest();
	//vectorTest();
	//pointTest();
	BoundingBoxTest();

	system("PAUSE");
	return 0;
}