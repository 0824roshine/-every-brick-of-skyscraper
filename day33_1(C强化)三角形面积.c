#include<stdio.h>
#include<math.h>
int main()
{
	float a = 3, b = 4, c = 5;
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%f", s);
	return 0;
}