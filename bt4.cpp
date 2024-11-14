#include"stdio.h"
int main()
{
	int sl;
	float dg,pvc,dt;
	
	printf("\nnhap so luong: ");
	scanf("%d",&sl);
	
	printf("\nnhap don gia: ");
	scanf("%f",&dg);
	
	printf("\nnhap phi van chuyen: ");
	scanf("%f",&pvc);
	
	printf("\nDoanh Thu : %.2f",sl*dg-pvc);
	
	
	return 0;
}
