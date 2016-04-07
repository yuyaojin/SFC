#pragma once
#include"Point.h"
template<class T>
class SFCConversion
{
public:
	Point<T> point;
public:
	SFCConversion();
	~SFCConversion();
	int* decimal2Binary(T value, int level);
	int* encodeMorton(Point<T> point,int level);
	//T2 encodeMorton(Point<T1> point£¬int m)
};

template<class T>
int* SFCConversion<T>::decimal2Binary(T value,int level)
{
	int decimalValue = value;
	int* reverseBinaryArray = new int[1];
	int* binaryArray = new int[1];
	int length = 0;
	while (decimalValue > 0)
	{
		*(reverseBinaryArray + i) = decimalValue % 2;
		decimalValue = decimalValue / 2;
		length++;
	}
	int null_num = level - length;
	//int temp_length = length;
	for (int i = 0; i < null_num; i++)
	{
		*(reverseBinaryArray + length+i)=0;
	}
	for (int i = 0; i < level; i++)
	{
		*(binaryArray + i) = *(reverseBinaryArray + level - i);
	}
	delete []reverseBinaryArray;
	return binaryArray;
}

template<class T>
int* SFCConversion<T>::encodeMorton(Point<T> point,int level)
{
	int dimension = point.returnDimension();
	//int coordinates[dimension] = { 0 };
	T* temp_coordinates= point.returnCoordinates();
	T* temp_pointer[dimension];
	int totalLength = dimension*level;
	T* binaryArray = new int[totalLength];
	for (int i = 0; i < dimension; i++)
	{
		temp_pointer[i] = this->decimal2Binary(*(temp_coordinates + i));
	}
	for (int i = 0; i < level; i++)
	{
		for (int j = 0; j < dimension; j++)
		{
			*(binaryArray +i*j +j) = *(temp_pointer[j] + i);
		}
	}
	delete[]temp_coordinates;
	return binaryArray;
}