#pragma once
#include <vector>
using namespace std;

template <class T>
class Point
{
private:
	int dimension;
	vector<T> coordinateValues;
public:
	Point<T>();
	Point<T>(int dimension, vector<T> coordinateValues);
	Point<T>(Point<T> &point);
	vector<T> returnCoordinateValues();
	T returnValue(int i);
	int returnDimensionNumber();
	void setCoordinateValues(vector<T> coordinateValues);
	void setDimension(int dimension);

};

template <class T>
Point<T>::Point()
{
	this->dimension = 0;
}

template <class T>
Point<T>::Point(int dimension, vector<T> coordinateValues)
{
	this->dimension = dimension;
	this->coordinateValues.assign(coordinateValues.begin(), coordinateValues.end());
}

template <class T>
Point<T>::Point(Point<T> &point)
{
	this->dimension = point.returnDimensionNumber();
	vector<T> vector_temp(point.returnCoordinateValues());
	this->coordinateValues.assign(vector_temp.begin(), vector_temp.end());

}


template <class T>
T Point<T>::returnValue(int i)
{
	return this->coordinateValues.at(i);
}

template <class T>
int Point<T>::returnDimensionNumber()
{
	return this->dimension;
}

template <class T>
vector<T> Point<T>::returnCoordinateValues()
{
	return this->coordinateValues;
}



template <class T>
void Point<T>::setDimension(int dimension)
{
	this->dimension = dimension;
}

template <class T>
void Point<T>::setCoordinateValues(vector<T> coordinateValues)
{
	this->coordinateValues.assign(coordinateValues.begin(), coordinateValues.end());
}
