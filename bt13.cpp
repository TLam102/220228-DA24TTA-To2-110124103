#include"stdio.h"
int main()
{
	int n;
	do{
	printf("nhap vao 1 so nguyen duong : ");
	scanf("%d",&n);
	}while(n>10||n<=0);
	 for(int i=1;i<=n;i++)
	 {
	 	printf("%d\t",i);
	 }
	
	return 0;
	
}
