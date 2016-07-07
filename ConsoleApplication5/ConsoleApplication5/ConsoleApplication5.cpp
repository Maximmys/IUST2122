// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"   
#include <iostream>   
using namespace std;
int factor(int l)
{
	int q = 1;
	for (int i = 1; i <= l; i++)
		q *= i;
	return q;
}


void main()
{
	int a;
		float s;
	while (true)
	{
		cin >> a;
		s = pow(26.8, a) / (factor(a)*exp(26.8));
		cout << "res"  << s << endl;
	}
}