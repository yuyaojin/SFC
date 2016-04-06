#pragma once
#include "Point.h"

template <class T>
class Rectangle
{
private:
	Point<T> minPoint;
	Point<T> maxPoint;
	int dimension;

public:
	Rectangle<T>(int n, Point<T> minPoint, Point<T> maxPoint);
	vector<Point<T>> generateComplateRectangle();
	int getDimension();
};

template<class T>
Rectangle<T>::Rectangle(int n, Point<T> minPoint, Point<T> maxPoint)
{
	this->dimension = n;
	this->minPoint.setDimension(n);
	this->minPoint.setCoordinates(minPoint.returnCoordinates());
	this->maxPoint.setDimension(n);
	this->maxPoint.setCoordinates(maxPoint.returnCoordinates());
}
