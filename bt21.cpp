#include "stdio.h"
#define COL 100
#define ROW 100
void nhap(int a[ROW][COL],int m,int n);
void xuat(int a[ROW][COL],int m,int n);
int tong(int a[ROW][COL],int m,int n);
int tongDong(int a[ROW][COL],int m,int n);
int tongCot(int a[ROW][COL],int m ,int n);
int kiemTraDong(int a[ROW][COL],int m,int n);
int kiemTraCot(int a[ROW][COL],int m,int n);
void sapGiamDong(int a[ROW][COL],int m,int n);
int kiemTraGTLe(int a[ROW][COL],int m,int n);
int timX(int a[ROW][COL],int m,int n);
int timViTriX(int a[ROW][COL],int m,int n);
int timGTNNTrenDong(int a[ROW][COL],int m,int n);
int timGTLNTrenDong(int a[ROW][COL],int m,int n);
void inSNTDong(int a[ROW][COL],int m, int n);

int main()
{
	int m,n,kq=0;
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
		//cau c
	kq=tong(a,m,n);
	printf("\nTong Mang la: %d ",kq);
		 //cau d
	tongDong(a,m,n);
	 	//cau e
	tongCot(a,m,n);
		//cau f
	kiemTraDong(a,m,n);
		//cau g
	if(	kiemTraCot(a,m,n)==1)
	{
		printf("Cot Co SNT.");
	}else
		{printf("Cot k co SNT.");}
		//cau i
	if(kiemTraGTLe(a,m,n)==0)
	{
		printf("cot KHONG co TOAN GT LE");
	}else
		if(kiemTraGTLe(a,m,n)==1)
		{
			printf("Cot CO TOAN GT LE ");
		}
		//cau j 
	timX(a,m,n);
		//cau k
	timViTriX(a,m,n);
		
	    //cau l
	timGTLNTrenDong(a,m,n);
		//cau m
	 timGTNNTrenDong(a,m,n);
	 	//cau n
	inSNTDong(a,m,n);
		//cau h
	sapGiamDong(a,m,n);
	
	
	
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
int tongDong(int a[ROW][COL],int m,int n)
{
	int k,j,sum=0;
	do{
		printf("\nnhap so dong can tinh TONG: ");
		scanf("%d",&k);
	}while (k<0||k>=m);
	
	for(j=0;j<n;j++)
	{
		if(k<m)
		{
			sum+=a[k][j];
		}
	}
	printf("Tong dong %d la: %d",k,sum);
	
}
int tongCot(int a[ROW][COL],int m ,int n)
{
	int S=0,h;
	do{
		printf("\n\nnhap so cot can tinh TONG:  ");
		scanf("%d",&h);
	}while (h<0||h>=n);
	{
		for(int i=0; i< m ;i++)
	       {
	       	if(h<n)
	       	S+=a[i][h];
	       }
    }printf("Tong cot %d la %d",h,S);
}
int kiemTraDong(int a[ROW][COL],int m,int n)
{	
	int k;
	do{
		printf("\n\nnhap so dong can kiem tra SO AM : ");
		scanf("%d",&k);
	}while (k<0||k>=m);
	for(int j=0;j<n;j++)
	{
		if(k<m)
		{
			if(a[k][j]<0)
			{
				printf("Dong co ton tai so am");break;
			}else
				{ printf("Dong khong ton tai so am ");break;	}
		}
	}
	
}
int kiemTraCot(int a[ROW][COL],int m,int n)
{
	int h;
	do{
		printf("\n\nnhap cot can kiem tra SNT : ");
		scanf("%d",&h);
	}while (h<0||h>=n);
	for(int i=0;i<m;i++)
	{
		if(a[i][h]<2)
		{
			continue;
		}
	   if(a[i][h]==2||a[i][h]%2!=0)
		{
			return 1;
		}
	}	
}
void sapGiamDong(int a[ROW][COL],int m,int n)
{
	int k,tmp[10][10];
	do{
		printf("\n\nnhap dong can sap giam: ");
		scanf("%d",&k);
	}while (k<0||k>=m);
	printf("dong sau khi sap giam: ");
	
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
int kiemTraGTLe(int a[ROW][COL],int m,int n)
{
	int k;
	do{
		printf("\n\nnhap cot can kiem tra GT LE: ");
		scanf("%d",&k);
	}while (k<0||k>=m);
	for(int i=0;i<m;i++)
	{
		if(a[i][k]%2==0)
		{
			return 0;
		}
	}
	return 1;
}
int timX(int a[ROW][COL],int m,int n)
{
	int x;

	printf("\n\nnhap so can tim: ");
	scanf("%d",&x);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==x)
			{
				printf("CO gia tri trong mang!");break;	
			}
		}
	}
}
int timViTriX(int a[ROW][COL],int m,int n)
{
	int x;

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
int timGTNNTrenDong(int a[ROW][COL],int m,int n)
{
	int k,min=a[k][0];
	do{
		printf("\n\nnhap so dong can tim GTNN: ");
		scanf("%d",&k);
	}while (k<0||k>=m);
	for(int j=0;j<n;j++)
	{
		if(min>a[k][j])
		{
			min=a[k][j];
		}
	}
	printf("GTNN trong dong la: %d",min);
}
int timGTLNTrenDong(int a[ROW][COL],int m,int n)
{
	int k,max=a[k][0];
	do{
		printf("\n\nnhap so dong can tim GTLN: ");
		scanf("%d",&k);
	}while (k<0||k>=m);
	for(int j=0;j<n;j++)
	{
		if(max<a[k][j])
		{
			max=a[k][j];
		}
	}
	printf("GTNN trong dong la: %d",max);
}
void inSNTDong(int a[ROW][COL],int m, int n)
{
	int k;
	do{
		printf("\n\nnhap so dong can tim SNT: ");
		scanf("%d",&k);
	}while (k<0||k>=m);
	printf("SNT trong dong la: ");
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






