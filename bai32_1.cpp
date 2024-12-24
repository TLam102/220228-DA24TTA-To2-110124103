#include<stdio.h>
#include<stdlib.h>
#include"string.h"
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

void nhapNgay(NGAY *d);
void xuatNgay(NGAY *d);
void nhapSP(SP*sp);
void xuatSP(SP*sp);
void nhapDSSP(SP* list, int n);
void xuatDSSP(SP* list, int n);
void timMa(char masp[],int n,SP *arr );
void timTen(char tensp[],int n,SP *arr);
void sapGiamDonGia(int n,SP *arr);

int main()
{
	SP * sp;
	char masp[10];
	char tensp[100];
	SP arr[100];
	int n=1;
		
	sp = (SP*)malloc(sizeof(SP)*n);
	
	char path[100];
	printf("\nNhap duong dan tap tin can doc du lieu: ");
	fflush(stdin);
	gets(path);
	
	FILE *fp = fopen(path,"r");//Doc du lieu
	
	if(fp!=NULL)
	{
		//Doc du lieu
		int i = 0;
		while(!feof(fp))
		{
			sp = (SP*)realloc(sp,sizeof(SP)*(i+1));
			fread(sp+i,sizeof(SP), 1, fp);
			i++;
		}
		
		n = i-1;
		printf("\nn=%d", n);
		//Dong tap tin
		fclose(fp);
	}
	else
	{
		printf("\nLoi mo file!");
	}
	
	printf("\nDanh sach cac san pham vua doc:\n");
	xuatDSSP(sp,n);
	
	printf("\nsau khi sap giam don gia: ");
	sapGiamDonGia(n,arr);
	xuatDSSP(sp,n);
	
	printf("\nnhap ma can tim: ");
	fflush(stdin);
	gets(masp);
	timMa(masp,n,arr);
	
	printf("\nnhap ten can tim: ");
	fflush(stdin);
	gets(tensp);
	timTen(tensp,n,arr);
	
	free(sp);
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
void timMa(char masp[],int n,SP *arr)
{
	for(int i=0;i<n;i++)
	{
		if (strcmp(arr[i].ma,masp)==0)
			xuatSP(&arr[i]);
	}
}
void timTen(char tensp[],int n,SP *arr)
{
	for(int i=0;i<n;i++)
	{
		if (strcmp(arr[i].ten,tensp)==0)
		xuatSP(&arr[i]);
	}
}

void sapGiamDonGia(int n,SP *arr)
{
	SP tmp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i].dongia<arr[j].dongia)
			{
				tmp = arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}		
	}
}
