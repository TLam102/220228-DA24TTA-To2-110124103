#include"stdio.h"

void inGiaTri(int n);
void inGTChan(int n);
void GTChiaHet5(int n);
void SoNgToNhoHonN(int n);
void tong(int n);
void tongLe(int n);
void tongNgToNhoHonN(int n);
int TBCSoLe(int n);
int demSoLe(int n);
void TBCSoNgToNhoHonN(int n);
int main()
{
	int n;
	do {
		printf("nhap so duong n: ");
		scanf("%d",&n);
	}while(n>=100||n<=0);
	
	inGiaTri( n);
	inGTChan( n);
	GTChiaHet5( n);
	SoNgToNhoHonN( n);
	tong( n);
	tongLe(n);
	tongNgToNhoHonN( n);
	TBCSoLe( n);
	TBCSoNgToNhoHonN( n);

	return 0;
}
//cau a
void inGiaTri(int n)
{
	for(int i=1;i<=n;i++)
	{
		printf("%d\t",i);
	}
}//cau b
void inGTChan(int n)
{
	printf("\n\nGia tri Chan :");
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("\t%d",i);
		}
	}
}
//cau c
void GTChiaHet5(int n)
{
	printf("\n\nGT Chia Het Cho 5 La: ");
	for(int i=1;i<=n;i++)
	{
		if(i%5==0)
		{
			printf("\t%d",i);
		}
	}
}
//cau d
void SoNgToNhoHonN(int n)
{
	printf("\n\nSo Nguyen To Nho Hon %d la: ",n);
	for(int i=2;i<n;i++)
	{
		if(i%2!=0||i==2)
		{
			printf("\t%d",i);
		}
	}
}
//cau e
void tong(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("\n\nTong 1 den %d la: %d",n,s);
}
//cau f
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
//cau g
void tongNgToNhoHonN(int n)
{
	int s=0;
	for(int i=2;i<n;i++)
	{
		if(i%2!=0||i==2)
		{
			 s=s+i;
		}
	}
	printf("\n\nTong Cac So Nguyen To Nho Hon %d la : %d",n,s);
}
//cau h
int TBCSoLe(int n)
{
	float TBC;
	int s= 0;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			 s=s+1;
		}
	}
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum=s+i;
		}
	}
	TBC=sum/s;
	
	printf("\n\nTBC cac so le : %.2f",TBC);
}
//cau i
void TBCSoNgToNhoHonN(int n)
{
	float tbc;
	int S=0;
	for(int i=2;i<n;i++)
	{
		if(i%2!=0||i==2)
		{
			 S=S+i;
		}
	}
	int s=0;
	for(int i=2;i<n;i++)
	{
		if(i%2!=0||i==2)
		{
			 s=s+1;
		}
	}
	tbc=S/s;
	printf("\n\nTBC So Nguyen To Nho Hon %d: %.2f",n,tbc);
}






























