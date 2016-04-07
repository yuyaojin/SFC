#pragma once
#include"Point.h"
template<class T>
class SFCConversion
{
public:
	Point<T> point;
	int n;
public:
	SFCConversion(int n);
	int* decimal2Binary(T value, int level);
	int* encodeMorton(Point<T> point,int level);

};

template<class T>
SFCConversion<T>::SFCConversion(int n)
{
	this->n = n;
}

template<class T>
int* SFCConversion<T>::decimal2Binary(T value,int level)
{
	int decimalValue = value;
	int* reverseBinaryArray = new int[1];
	int* binaryArray = new int[1];
	int length = 0;
	while (decimalValue > 0)
	{
		*(reverseBinaryArray + length) = decimalValue % 2;
		decimalValue = decimalValue / 2;
		length++;
	}
	//printf("%s\n","reverse");
	int null_num = level - length;
	//int temp_length = length;
	for (int i = 0; i <= null_num; i++)
	{
		*(reverseBinaryArray + length+i)=int(0);
	}
	for (int i = 0; i < level; i++)
	{
		*(binaryArray + i) = *(reverseBinaryArray + level - i-1);
	}
	printf("\n");

	return binaryArray;
}

template<class T>
int* SFCConversion<T>::encodeMorton(Point<T> point,int level)
{
	int dimension = point.returnDimension();
	//int coordinates[dimension] = { 0 };
	T* temp_coordinates= point.returnCoordinates();
	T** temp_pointer = new T*[dimension];
	for (int i = 0; i <dimension ; i++)
	{
		temp_pointer[i] = new T[level];
	}
	int totalLength = dimension*level;
	T* binaryArray = new int[totalLength];
	for (int i = 0; i < dimension; i++)
	{
		temp_pointer[i] = this->decimal2Binary(*(temp_coordinates + i),level);
	}
	for (int i = 0; i < level; i++)
	{
		for (int j = 0; j < dimension; j++)
		{
			*(binaryArray +i*j +j) = *(temp_pointer[j] + i);
			printf("%d", *(binaryArray + i*j + j));
		}
	}
	//delete[]temp_coordinates;
	
	return binaryArray;
}