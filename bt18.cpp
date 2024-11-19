#include"stdio.h"
void tong(int n);
void tongLe(int n);
void tongNgTo(int n);
void demSoKhong(int n);
void soChiaHetcho3(int n);
void soChiaHetCho5(int n);
int main()
{ 
	int n;

	do {
		printf("nhap so duong n: ");
		scanf("%d",&n);
	}while(n<100||n>=1000);
	
	tong(n);
	tongLe( n);
	tongNgTo( n);
	demSoKhong( n);
	soChiaHetcho3( n);
	soChiaHetCho5( n);
	
	return 0;
}
//cau a
void tong(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("\n\nTong 1 den %d la: %d",n,s);
}
//cau b
void tongLe(int n)
{	
	int s=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			s=s+i;
		}
	}
	printf("\n\n Tong Cac So Le La: %d",s);
}
//cau c
void tongNgTo(int n)
{
	int s=0;
	for(int i=2;i<=n;i++)
	{
		if(i%2!=0||i==2)
		{
			 s=s+i;
		}
	}
	printf("\n\nTong Cac So Nguyen To la : %d",s);
}
//cau d
void demSoKhong(int n)
{
	int dem=0,s;
	while(n!=0)
	{
		if(n%10==0)
		{
		
	    	dem++;
		}
		n/=10;
	}
	printf("\nCo %d trong n !!",dem,n);
}
//cau e
void soChiaHetcho3(int n)
{
	int dem=0,s;
	while(n!=0)
	{
		if((n%10)%3==0)
		{
		
	    	dem++;
		}
		n/=10;
	}
	printf("\nCo %d chia het cho 3 !!",dem);
}
//cau f
void soChiaHetCho5(int n)
{
	int dem=0,s;
	while(n!=0)
	{
		if((n%10)%5==0)
		{
		
	    	dem++;
		}
		n/=10;
	}
	printf("\nCo %d chia het cho 5 !!",dem);
}
		
	












