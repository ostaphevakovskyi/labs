#include <stdio.h>
#include <math.h>
#include<conio.h>
int main(void)
{
	double a, b, h, d, x, y, z;
	int k;

	printf("a = ");
	scanf_s("%lf", &a);
	printf("b = ");
	scanf_s("%lf", &b);
	printf("h = ");
	scanf_s("%lf", &h);
	printf("d = ");
	scanf_s("%lf", &d);
	for (x = a; x <= b + h / 2; x += h)
	{
		k = 0; z = 0;
		do
		{
			k += 1;
			y = (pow((-1), k)*sin(k*x)) / k;
			z += y;
		} while (fabs(y) > d);
		printf("x = %lf --> z = %lf \n", x, z);
	}
	_getch();
}