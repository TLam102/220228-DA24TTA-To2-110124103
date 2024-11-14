#include"stdio.h"
int main()
{
	int n,s=0;
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while(n<=0);
	while(n!=0)
	{
		s=s+n%10;
		n=n/10;
	}
	printf("Tong: %d",s);
	
	return 0;
}
