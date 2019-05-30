#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	double x, y, t1, t2, a = 4, b = 1.38, ax;

	printf("Enter x and y: \n");
	scanf("%lf %lf", &x, &y);
	t1 = (pow(x,3) / 3 - 3 * b * x + 3 * pow(b,2) * log(x) + pow(b,3) / x) / (pow(a,4));
	t2 = (1 / 1 - sin(a * x)) + tan((a * x) / 2) / a;
	printf("t1 = %lf\nt2 = %lf", t1, t2);
	return(0);
}
