#pragma once
#include <vector>
using namespace std;
template <class T>
class Point
{
private:
	int dimensionNumbers;
	vector<T> coordinateValues;
public:
	Point<T>(int dimensionNumbers, vector<T> coordinateValues);

};


template <class T>
Point<T>::Point(int dimensionNumbers, vector<T> coordinateValues)
{
	this->dimensionNumbers = dimensionNumbers;
	vector<T>::iterator vec_iterator = coordinateValues.begin();
	while (vec_iterator != coordinateValues.end())
	{
		this->coordinateValues.push_back(*vec_iterator);
		vec_iterator++;
	}
}

