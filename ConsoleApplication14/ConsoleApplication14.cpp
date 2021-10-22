#include <iostream>
#define _USE_MATH_DEFINES
#include<math.h>
using namespace std;
int main()
{
	double a, b, x, y, z;
	printf("input x:");
	scanf_s("%lf", &x);
	printf("input y:");
	scanf_s("%lf", &y);
	printf("input z:");
	scanf_s("%lf", &z);
	a = ((2 * cos(x - (M_PI / 6))) / (1 / 2) + (sin(y) * sin(y))) + cos(2.7);
	b = 1 + (pow(z, 2) / (fabs(3 - y)) + (pow(z, 2) / 5) + cbrt(x - 5 * y) + pow(M_E, 2 * x - y));
	printf("A:%e", a);
	printf("\nB:%e", b);
}