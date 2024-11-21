#include"stdio.h"
#define SIZE 100

void nhap(int a[],int n);
void xuat(int a[],int n);
int tong(int a[],int n);
int tongDuong(int a[],int n);
int tongVTL(int a[],int n);
int demPTA(int a[],int n);
int demPTL(int a[],int n);
int demSNT(int a[],int n);
void TimSNT(int a[],int n);
void inGTL(int a[],int n);
int kiemTra(int a[],int n);
int timX(int a[],int n);

int main()
{
	int n,kq,dem;
	int	a[SIZE];
	do {
		printf("nhap so phan tu: ");
		scanf("%d",&n);
	}while (n<=0||n>100);
	//cau a
	nhap( a,n);
	//cau b
	printf("\n MANG: ");
	xuat(a,n);
	//cau c
	kq=tong(a,n);
	printf("\n\nTong cac GT trong mang : %d",kq);
	//cau d
	kq=tongDuong(a, n);
	printf("\n\nTong GT duong trong mang la:%d",kq);
	//cau e
	kq=tongVTL(a,n);
	printf("\n\nTong GT vi tri le trong mang la:%d",kq);
	//cau f
	dem=demPTA(a,n);
	printf("\n\nCo %d phan tu  am trong mang!!",dem);
	//cau g
	dem=demPTL(a,n);
	printf("\n\nCo %d phan tu  le trong mang!!",dem);
	//cau h
	dem=demSNT(a,n);
	printf("\n\nCo %d phan tu la so Nguyen To trong mang!!",dem);
	//cau i
	TimSNT(a,n);
	//cau j
	printf("\n\n Gia Tri le trong mang la: ");
	inGTL(a,n);
	//cau k
	kiemTra(a,n);
	timX(a,n);
	
	return 0;
}
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%8d",a[i]);
	}
}
int tong(int a[],int n)
{
	int t=0;
	for(int i=0;i<n;i++)
	{
		t+=a[i];
		
	}
	return t;
}
int tongDuong(int a[],int n)
{
	int Tong=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			Tong+=a[i]	;
		}
	}
	return Tong;
}
int tongVTL(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			sum+=a[i];
		}
		
		
	}
	return sum;
}
int demPTA(int a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		
			dem+=1;
		
	}
	return dem;
}
int demPTL(int a[],int n)
{
	int dl=0;
	for(int i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			dl++;
		}	
	}
	return dl;
}
int demSNT(int a[],int n)
{
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0||a[i]==2)
		{
			d++;
		}
	}return d;
}
void TimSNT(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
	
		if(a[i]%2==0||a[i]==2)
		{
			printf("\n\n %d la SNT dau tien trong mang",a[i]);break;
		}
	}
}
void inGTL(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d\t",a[i]);
		}	
	}
}
int kiemTra(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		
		printf("\nco phan tu am trong mang!!");
		
	}
	return 0;
}
int timX(int a[],int n)
{
	int x;
	printf("\nNhap so can tim : ");
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		
		printf("\n %d co o vi tri a[%d]",x,i);
		
	}
	
	return 0;
}









