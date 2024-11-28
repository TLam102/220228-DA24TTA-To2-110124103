#include "stdio.h"
#define COL 100
#define ROW 100

void nhap(int a[ROW][COL],int m,int n);
void xuat(int a[ROW][COL],int m,int n);
int tong(int a[ROW][COL],int m,int n);
int tongDong(int a[ROW][COL],int m,int n,int k);
int tongCot(int a[ROW][COL],int m ,int n,int k);
int kiemTraDong(int a[ROW][COL],int m,int n,int k);
int kiemTraCot(int a[ROW][COL],int m,int n,int k);
void sapGiamDong(int a[ROW][COL],int m,int n,int k);
int kiemTraGTLe(int a[ROW][COL],int m,int n,int k);
int timX(int a[ROW][COL],int m,int n,int x);
int timViTriX(int a[ROW][COL],int m,int n,int x);
int timGTNNTrenDong(int a[ROW][COL],int m,int n,int k);
int timGTLNTrenDong(int a[ROW][COL],int m,int n,int k);
void inSNTDong(int a[ROW][COL],int m, int n,int k);

int main()
{
	int m,x,n,k,kq=0;
	int a[ROW][COL];
	do{
		printf("nhap so dong & so cot: ");
		scanf("%d %d",&m,&n);	
	}while (n<=0||m<=0||m>100||n>100);

		//cau a
	nhap(a,m,n);
		//cau b
	printf("\nMang la:\n");
	xuat(a,m,n);
	
	printf("\n\nnhap  k= ");
	scanf("%d",&k);
	
	printf("\n\nnhap x=: ");
	scanf("%d",&x);
	
		//cau c
	kq=tong(a,m,n);
	printf("\nTong Mang la: %d ",kq);
		 //cau d
	tongDong(a,m,n,k);
	 	//cau e
	tongCot(a,m,n,k);
		//cau f
	kiemTraDong(a,m,n,k);
		//cau g
	if(	kiemTraCot(a,m,n,k)==1)
	{
		printf("\nCot Co SNT.");
	}else
		{printf("\nCot k co SNT.");}
		//cau i
	if(kiemTraGTLe(a,m,n,k)==0)
	{
		printf("\ncot KHONG co TOAN GT LE");
	}else
		if(kiemTraGTLe(a,m,n,k)==1)
		{
			printf("\nCot CO TOAN GT LE ");
		}
		//cau j 
	timX(a,m,n,x);
		//cau k
	timViTriX(a,m,n,x);
	    //cau l
	timGTLNTrenDong(a,m,n,k);
		//cau m
	 timGTNNTrenDong(a,m,n,k);
	 	//cau n
	inSNTDong(a,m,n,k);
		//cau h
	sapGiamDong(a,m,n,k);

	return 0;
}
void nhap(int a[ROW][COL],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void xuat(int a[ROW][COL],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
int tong(int a[ROW][COL],int m,int n)
{
	int i,j,s=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			s+=a[i][j];
		}
	}
	return s;
}
int tongDong(int a[ROW][COL],int m,int n,int k)
{
	int j,sum=0;
	
	for(j=0;j<n;j++)
	{
		if(k<m)
		{
			sum+=a[k][j];
		}
	}
	printf("\nTong dong %d la: %d",k,sum);
	
}
int tongCot(int a[ROW][COL],int m ,int n,int k)
{
	int S=0;
	{
		for(int i=0; i< m ;i++)
	       {
	       	if(k<n)
	       	S+=a[i][k];
	       }
    }printf("\nTong cot %d la %d",k,S);
}
int kiemTraDong(int a[ROW][COL],int m,int n,int k)
{	
	
	
	for(int j=0;j<n;j++)
	{
		if(k<m)
		{
			if(a[k][j]<0)
			{
				printf("\nDong co ton tai so am");break;
			}else
				{ printf("\nDong khong ton tai so am ");break;	}
		}
	}
}
int kiemTraCot(int a[ROW][COL],int m,int n,int k)
{
	
	for(int i=0;i<m;i++)
	{
		if(a[i][k]<2)
		{
			continue;
		}
	   if(a[i][k]==2||a[i][k]%2!=0)
		{
			return 1;
		}
	}	
}
void sapGiamDong(int a[ROW][COL],int m,int n,int k)
{
	int tmp[10][10];
	printf("\ndong sau khi sap giam: ");
	
	for(int j=0;j<n-1;j++)
	{
		for(int i=1;i<n;i++)
		{
			if(a[k][j]<a[k][i])
			{
				tmp[10][10]=a[k][j];
				a[k][j]=a[k][i];
				a[k][i]=tmp[10][10];
			}	
		}
	}

	for(int j=0;j<n;j++)
	{
			printf("%5d",a[k][j]);
	}
	
		
	}
int kiemTraGTLe(int a[ROW][COL],int m,int n,int k)
{
	
	for(int i=0;i<m;i++)
	{
		if(a[i][k]%2==0)
		{
			return 0;
		}
	}
	return 1;
}
int timX(int a[ROW][COL],int m,int n,int x)
{

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==x)
			{
				printf("\nCO gia tri trong mang!");break;	
			}
		}
	}
}
int timViTriX(int a[ROW][COL],int m,int n,int x)
{

	printf("\n\nnhap so can tim vi tri: ");
	scanf("%d",&x);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==x)
			{
				printf(" a[%d][%d]=%2d\n",i,j,x);
			}
		}
	}
}
int timGTNNTrenDong(int a[ROW][COL],int m,int n,int k)
{
	int min=a[k][0];
	
	for(int j=0;j<n;j++)
	{
		if(min>a[k][j])
		{
			min=a[k][j];
		}
	}
	printf("\nGTNN trong dong la: %d",min);
}
int timGTLNTrenDong(int a[ROW][COL],int m,int n,int k)
{
	int max=a[k][0];
	for(int j=0;j<n;j++)
	{
		if(max<a[k][j])
		{
			max=a[k][j];
		}
	}
	printf("\nGTNN trong dong la: %d",max);
}
void inSNTDong(int a[ROW][COL],int m, int n,int k)
{
	printf("\nSNT trong dong la: ");
	for(int j=0;j<n;j++)
	{
		
		if(a[k][j]<2)
		{
			continue;
		}
		if(a[k][j]==2||a[k][j]%2!=0)
		{
			printf("%2d\t",a[k][j]);
		}
	}
}





