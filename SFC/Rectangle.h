#pragma once
#include "Point.h"
#include <math.h>
template <class T>
class Rectangle
{
private:
	Point<T> minPoint;
	Point<T> maxPoint;
	int dimension=2;
	T** complateRectangle = new T*[1];

public:
	Rectangle<T>(int n, Point<T> minPoint, Point<T> maxPoint);
	void generateComplateRectangle();
	int returnDimension();
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
//
//template<class T>
//void Rectangle<T>::generateComplateRectangle()
//{
//	int row = pow(2.0, double(this->dimension));
//	int col = this->dimension;
//	int i = 0;
//	int j = 0;
//	int n = this->dimension;
//	T minPoint[n], maxPoint[n];
//	for (i = 0; i < n; i++)
//	{
//		minPoint[n] = *(minPoint.returnCoordinates() + i);
//	}
//	for (i = 0; i < n; i++)
//	{
//		maxPoint[n] = *(maxPoint.returnCoordinates() + i);
//	}
//
//	this->complateRectangle = (T**)(new T[row]);
//	for (i = 0; i < row; i++)
//	{
//		this->complateRectangle[i] = (T*)new T[col];
//	}
//
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//
//		}
//	}
//}

template<class T>
int Rectangle<T>::returnDimension()
{
	return this->dimension;
}
