// SFC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Point.h"
#include "Rectangle.h"
int _tmain(int argc, _TCHAR* argv[])
{

	int n = 3;
	int a[3] = { 100, 200 ,300};
	Point<int>(n, a);
	//vector<int> int_vec;
	//int_vec.push_back(10);
	//int_vec.push_back(20);
	//Point<int> points(n,int_vec);
	//Point<int> points1(points);
	//Rectangle<int> rec(2,points,points1);
	system("pause");
}

