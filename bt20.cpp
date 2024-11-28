
#include "stdio.h"

void nhap(float a[],int n);
void xuat(float a[],int n);
float tong(float a[],int n);
float TBC(float a[],int n);
void demPTD(float a[],int n);
void sapTang(float a[],int n);
float GTVTL(float a[],int n);
void viTriGTKhong(float a[],int n);
float timGTLN(float a[],int n);
float GTLNDauTien(float a[],int n);
void CacViTriGTLN(float a[],int n);

#define SIZE 100
int main ()
{
	float a[SIZE],kq;
	int n;
	do {
		printf("nhap so phan tu trong mang: ");
		scanf("%d",&n);	
	}while (n<=0||n>100);
		//cau a
	nhap(a,n);
		//cau b
	printf("\nMang la: ");
	xuat(a,n);
		//cau c
	/*kq=tong(a,n);
	printf("\nTong la: %.2f",kq);
		//cau d
	kq=TBC(a,n);
	printf("\nTBC cac phan tu tai VTL la: %.2f",kq);
		//cau e
	demPTD(a,n);
		//cau g
	printf("\nGT tai vi tri le la : ");
	GTVTL(a,n);
		// cau h
	viTriGTKhong(a,n);
		// cau i
	printf("\nGTLN trong mang la: ");
	timGTLN(a,n);
		//cau k
	printf("\nCac vi tri co GTLN la: ");
	CacViTriGTLN(a,n);
		//cau j
	printf("\nGTLN dau tien trong mang la : ");
	GTLNDauTien(a,n);
			//cau l
	if(kiemTra(a,n)==0)
	{
		printf("\nMang khong co toan so am!");
	}else
		if(kiemTra(a,n)==1)
		 	{printf("\nMang co toan so am!");	}
		//cau f
	sapTang(a,n);
	printf("\nSau khi sap tang: ");
	xuat(a,n);*/
	/*câu h*/
	

void nhap(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nnhap a[%d]= ",i);
		scanf("%f",&a[i]);
	}
}
void xuat(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%.2f\t",a[i]);
	}
}
float tong(float a[],int n)
{
	float s=0;
	for(int i=0;i<n;i++)
	{
		s+=a[i];
	}
	return s;
}
float TBC(float a[],int n)
{
	float sum=0,tbc;
	int dem=0;
	for(int i=1;i<n;i+=2)
	{
		sum+=a[i];
		dem++;
		
	}
	tbc=sum/dem;
	return tbc;
}
void demPTD(float a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			dem++;
		}
	}
	printf("\nCo %d phan tu duong trong mang!!",dem);	
}
void sapTang(float a[],int n)
{
	float t=0;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
float GTVTL(float a[],int n)
{
	
	for(int i=1; i<n ;i=i+2)
	{
			printf("%.2f\t",a[i]);
		
	}
}
void viTriGTKhong(float a[],int n)
{
	printf("\nVi tri co GT la 0: ");
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			printf("a[%d]\t",i);
		}
	}
}
float timGTLN(float a[],int n)
{
	float max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==max)
		{
			printf("%.2f\t",a[i]);
		}
	}
}
float GTLNDauTien(float a[],int n)
{
		float max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==max)
		{
			printf("a[%d]=%.2f\t",i,a[i]);break;
		}
	}

}
void CacViTriGTLN(float a[],int n)
{
	float m=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			printf("a[%d]\t",i);
		}
	}
}
 
