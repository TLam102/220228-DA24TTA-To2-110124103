#include"stdio.h"
#define PI 3.1415
int main()
{	float sthang,stron,sconlai;
	float dl=50;
	float db=23;
	float h=30;
	float cv=12.56;
	sthang=(((dl*db)*h)/2);
	stron=(cv*cv)/(4*PI);
	printf(" \ndien tich hinh thang: %.2f",sthang);
	printf(" \nDien tich hinh tron: %.2f",stron);
	printf(" \nDien tich con lai: %.2f",sthang - stron);
	
	return 0;
}
