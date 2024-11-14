#include "stdio.h"
#include"math.h"
int main()
{
	double a=1233.567, b=-12;
	//ham lay GT tuyet doi of so thuc
	printf("\nfabs (%lf) = %lf ",b,fabs(b));
	//ham lam tron
	printf("\nceil (%lf) = %lf",a,ceil(a));
	//ham cat tron so
	printf("\nfloor (%lf) = %lf",a,floor(a));
	//ham tinh can bat hai
	printf("\nsqrt (%lf) = %lf",a,sqrt(a));
	//ham so mu
	printf("\npow (2,3) = %lf",ceil(2.3));
	return 0;
}
