#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

#define Eps pow(10, -6)
#define RightResult pow(M_PI, 2)/12

double getNMemberOfSequence(int n);

double getNMemberOfSequence(int n)
{
	return pow(-1, n) / pow(n + 1, 2);
}

int main()
{
	double sum = 0;
	double addendum = 1;
	for (int n = 0; abs(addendum) > Eps; n++) {
		addendum = getNMemberOfSequence(n);
		sum += addendum;
	}
	std::cout << "Result: " << sum << std::endl;
	std::cout << "Right result: " << RightResult << std::endl;
	std::cin.ignore();
    return 0;
}
