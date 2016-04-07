// SFC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Point.h"
#include "Rectangle.h"
#include "SFCConversion.h"
int _tmain(int argc, _TCHAR* argv[])
{

	int n = 2;
	int a[2] = { 3, 9 };
	Point<int> point1(n, a);
	int b[2] = { 300, 400 };
	Point<int> point2(n, b);
	
	//vector<int> int_vec;
	//int_vec.push_back(10);
	//int_vec.push_back(20);
	//Point<int> points(n,int_vec);
	//Point<int> points1(points);
	Rectangle<int> rec(2,point1,point2);
	SFCConversion<int> sfc(1);
	sfc.encodeMorton(point1, 5);
	system("pause");
}

