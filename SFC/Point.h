#pragma once
#include <vector>
using namespace std;

template <class T>
class Point
{
private:
	int dimension;
	T *coordinates = new T[1];;
public:
	Point<T>();
	Point<T>(int dimension, T *coordinates);
	Point<T>(Point<T> &point);
	T* returnCoordinates();
	T returnValue(int i);
	int returnDimension();
	void setCoordinates(T *coordinates);
	void setDimension(int dimension);

};

template <class T>
Point<T>::Point()
{
	this->dimension = 0;
}

template <class T>
Point<T>::Point(int dimension, T *coordinates)
{
	this->dimension = dimension;
	//this->coordinates = new T[1];
	for (int i = 0; i < dimension; i++)
	{
		*(this->coordinates+i)= coordinates[i];
	}
}

template <class T>
Point<T>::Point(Point<T> &point)
{
	this->dimension = point.returnDimension();
	T *temp_coordinates = point.returnCoordinates();
	for (int i = 0; i < this->dimension;i++)
	{
		*(this->coordinates + i) = *(temp_coordinates + i);
	}
}


template <class T>
T Point<T>::returnValue(int i)
{
	return *(this->coordinates+i);
}

template <class T>
int Point<T>::returnDimension()
{
	return this->dimension;
}

template <class T>
T* Point<T>::returnCoordinates()
{
	return this->coordinates;
}

template <class T>
void Point<T>::setDimension(int dimension)
{
	this->dimension = dimension;
}

template <class T>
void Point<T>::setCoordinates(T *coordinates)
{
	for (int i = 0; i < dimension; i++)
	{
		*(this->coordinates + i) = coordinates[i];
	}
}
