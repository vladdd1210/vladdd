// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "math.h"

int main()
{
	int x;
	int y;
	double c;
	std::cin >> x;
	std::cin >> y;
	c = log(1 + 2 * y)*log(1 + 2 * y) / sin(4 * pow(x,3) + 1);
	printf("%.5f", c);
    return 0;
}

