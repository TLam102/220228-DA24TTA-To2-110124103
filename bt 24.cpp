#include"stdio.h"
#include"cmath"
struct PHAN_SO{
	int tuso,mauso;
};
typedef struct PHAN_SO PS;

void nhap(PS *a);
void xuat(PS a);
void rutGon(PS a);
void cong(PS a,PS b,PS c);
void tru(PS a,PS b,PS c);
void nhan(PS a,PS b,PS c);
void thuong(PS a,PS b,PS c);

int main()
{
	PS a,b,c;
	
	printf("\nnhap phan so thu 1:");
	nhap(&a);
	
	printf("\nnhap phan so thu 2:");
	nhap(&b);
	
	printf("\nphan so vua nhap la:");
	xuat(a);
	printf("\t");
	xuat(b);
	

	cong(a,b,c);
	tru(a,b,c);
	nhan(a,b,c);
	thuong(a,b,c);

	return 0;
}
void xuat(PS a)
{
	printf("%d/%d",a.tuso,a.mauso);
}
void nhap(PS *a)
{ 

	printf("\nNhap tu so : ");
	scanf("%d",&a->tuso);
	
	printf("\nNhap mau so : ");
	scanf("%d",&a->mauso);

}
void rutGon(PS c)
{
	for(int i=2;i<10;i++)
	{
		while(c.tuso%i==0&&c.mauso%i==0)
		{
			for(int i=2;i<10;i++)
			{
				c.tuso=c.tuso/i;
				c.mauso=c.mauso/i;
			}
		}
	}
	if(c.mauso!=1)
	printf("%d/%d",c.tuso,c.mauso);
	else
		printf("%d",c.tuso);
}
void cong(PS a,PS b,PS c)
{
	printf("\n\nPhan so 1 sau khi rut gon: ");
	rutGon(a);
	printf("\nPhan so 2 sau khi rut gon: ");
	rutGon(b);
	c.mauso=a.mauso*b.mauso;
	c.tuso=a.tuso*b.mauso+b.tuso*a.mauso;
	printf("\n\n tong hai phan so la: ");
	rutGon(c);
}
void tru(PS a,PS b,PS c)
{
	c.mauso=a.mauso*b.mauso;
	c.tuso=a.tuso*b.mauso-b.tuso*a.mauso;
	printf("\n hieu hai phan so la: ");
	rutGon(c);
}
void nhan(PS a,PS b,PS c)
{
	c.mauso=a.mauso*b.mauso;
	c.tuso=a.tuso*b.tuso;
	printf("\n Tich hai phan so la: ");
	rutGon(c);
}
void thuong(PS a,PS b,PS c)
{
	c.mauso=a.mauso*b.tuso;
	c.tuso=a.tuso*b.mauso;
	printf("\n thuong hai phan so la: ");
	rutGon(c);
}

