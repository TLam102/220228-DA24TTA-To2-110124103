#include "stdio.h"
#include "stdlib.h"

void nhap(int *a,int n);
void xuat(int *a,int n);
int tong(int *a,int n);
int timGTLN(int *a,int n);
int dem(int *a,int n);
int demX(int *a,int n,int x);
int kiemTra(int *a,int n);
void sapTang(int *a,int n);
void locSoAm(int *a,int n);

int main ()
{
	int *p,n,kq,x;
	int a[100];
	do{
		printf("nhap n (n>0;n<50) :");
		scanf("%d",&n);
	}while(n<=0||n>50);
	printf("\nnhap x: ");
	scanf("%d",&x);
	//cap phat vung nho
	p=(int*) malloc (n*sizeof (int));
	
	printf("\nnhap ds so:\n");
	nhap(a,n);
	
	printf("\ndanh sach so la: ");
	xuat(a,n);
	
	kq=tong(a,n);
	printf("\ntong :%d",kq);
	
	kq=timGTLN(a,n);
	printf("\nGia tri lon nhat la:%d ",kq);
	
	kq=dem(a,n);
	printf("\nGTLN duoc lap lai :%d",kq);
	
	kq=demX(a,n,x);
	printf("\nX duoc lap lai %d lan.",kq);
	
	if(kiemTra(a,n)==1)
	{
		printf("\nDanh sach so CO ton tai so DUONG.");
	}else
		{printf("\nDanh sach so KHONG ton tai so DUONG");	}
		
	printf("\ncac so AM :");
	locSoAm(a,n);
	
		
	printf("\nSau khi sap tang:");
	sapTang(a,n);
	xuat(a,n);
	
	return 0;
}
void nhap(int *a,int n)
{
	
	for(int i=0;i<n;i++ )
	{
		scanf("%d",&a[i]);
	}
}
void xuat(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
int tong(int *a,int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+=*(a+i);
	}
	return s;
}
int timGTLN(int *a,int n)
{
	int m=a[0];
	for(int i=0;i<n;i++)
	{
		if(m<*(a+i))
		{
			m=*(a+i);
		}
	}
	return m;
}
int dem(int *a,int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(*(a+i)==timGTLN(a,n))
		{
			dem++;
		}
	}
	return dem;
}
int demX(int *a,int n,int x)
{
	int d;
	for(int i=0;i<n;i++)
	{
		if(*(a+i)==x)
		{
			d++;
		}
	}
	return d;
}
int kiemTra(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		if(*(a+i)>0)
		{
			return 1;
		}
	}
	return 0;
}
void sapTang(int *a,int n)
{
	int tmp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[i]>a[j]))
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				
			}
		}
	}
}
void locSoAm(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		if(*(a+i)<0)
		{
			printf("%d\t",*(a+i));
		}
	}
}

