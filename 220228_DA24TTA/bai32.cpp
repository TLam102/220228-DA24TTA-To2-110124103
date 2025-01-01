#include<stdio.h>
#include<stdlib.h>
struct NGAY_THANG
{
	int ngay, thang, nam;	
};
typedef struct NGAY_THANG NGAY;

struct SAN_PHAM
{
	char ma[10]	, ten[100];
	NGAY ngaysx;
	float dongia, hansd;
};
typedef struct SAN_PHAM SP;

void nhapNgay(NGAY *);
void xuatNgay(NGAY *);
void nhapSP(SP*);
void xuatSP(SP*);
void nhapDSSP(SP*, int);
void xuatDSSP(SP*, int);

int main()
{
	SP * a;
	int n;
	
	printf("\nNhap vao so luong san pham: ");
	scanf("%d", &n);
	
	a = (SP*)malloc(sizeof(SP)*n);
	
	nhapDSSP(a, n);
	xuatDSSP(a, n);
	
	char path[100];
	printf("\nNhap duong dan can ghi du lieu: ");
	fflush(stdin);
	gets(path);
	
	FILE *fp = fopen(path,"wb");
	
	if(fp!=NULL)
	{
		//Ghi du lieu
		fwrite(a,sizeof(SP), n, fp);
		//Dong tap tin
		fclose(fp);
	}
	else
	{
		printf("\nLoi mo file!");
	}
	
	free(a);
	return 0;
}
void nhapDSSP(SP* list, int n)
{
	int i;
	for(i = 0; i<n; i++)
	{
		printf("\nNhap thong tin san pham tai vi tri %d: ", i);
		nhapSP(list+i);
	}
}
void xuatDSSP(SP* list, int n )
{
	int i;
	for(i = 0; i<n; i++)
	{
		xuatSP(list+i);
		printf("\n");
	}
}


void nhapSP(SP*sp)
{
	printf("\nNhap ma san pham:");
	fflush(stdin);
	scanf("%s", sp->ma);
	
	printf("\nNhap ten san pham:");
	fflush(stdin);
	gets(sp->ten);
	
	printf("\nNhap don gia san pham:");
	scanf("%f", &sp->dongia);
	
	printf("\nNhap han su dung:");
	scanf("%f", &sp->hansd);
	
	printf("\nNhap ngay san xuat:");
	nhapNgay(&sp->ngaysx);
}
void xuatSP(SP*sp)
{
	printf("\n%s\t%s\t%.f\t%.f\t",sp->ma, sp->ten, sp->dongia, sp->hansd);
	xuatNgay(&sp->ngaysx);
}



void nhapNgay(NGAY *d)
{
	printf("\nNhap ngay: ");
	scanf("%d", &d->ngay);
	
	printf("\nNhap thang: ");
	scanf("%d", &d->thang);
	
	printf("\nNhap nam: ");
	scanf("%d", &d->nam);
}

void xuatNgay(NGAY *d)
{
	printf("%d/%d/%d", d->ngay, d->thang, d->nam);
}
