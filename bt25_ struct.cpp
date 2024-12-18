#include"stdio.h"
#include<stdlib.h>
#include"string.h"


struct NGAY_THANG{
	int ngay;
	int thang;
	int nam;
};
struct MON_HOC{
	char mamon[15];
	float diem;
};

struct SINH_VIEN{
	char mssv[15];
	char hoten[50];
	char diachi[100];
	char gioitinh[5];
	NGAY_THANG ngaysinh;
	MON_HOC monhoc;
};
typedef struct SINH_VIEN SV;
void nhap(SV *a);
void xuat(SV a);
void nhapNSV(SV arr[],int n);
void xuatNSV(SV arr[],int n);
void timMSSV(SV *arr, char masv[],int n);
void timTen(SV *arr,char ten[],int n);
void timThang8(SV *arr,int n);
void timGioiTinh(SV *arr,char GT[],int n);
void timDiaChi(SV *arr,char DC[],int n);

int main()
{
	SV a;
	int n;
	SV arr[10]; 
	char masv[15];
	char ten[50];
	char GT[5];
	char DC[100];
	
	printf("\nnhap so sinh vien: ");
	scanf("%d",&n);
	
	nhapNSV(arr,n);
	xuatNSV(arr,n);
	
	printf("\nnhap MSSV can tim: ");
	fflush(stdin);
	gets(masv);
	timMSSV(arr,masv,n);
	
	printf("\nnhap TEN can tim: ");
	fflush(stdin);
	gets(ten);
	timTen(arr,ten,n);
	
	printf("\nnhap GIOI TINH can tim: ");
	fflush(stdin);
	gets(GT);
	timGioiTinh(arr,GT,n);
	
	printf("\nnhap DIA CHI can tim: ");
	fflush(stdin);
	gets(DC);
	timDiaChi(arr,DC,n);
	
	printf("\n sv sinh THANG 8: ");
	timThang8(arr,n);
	
	
	
	return 0;
}

void nhap(SV *a)
{
	printf("\nMSSV: ");
	fflush(stdin);
	gets(a->mssv);
	
	printf("\nho&ten: ");
	fflush(stdin);
	gets(a->hoten);
	
	printf("\ngioi tinh: ");
	fflush(stdin);
	gets(a->gioitinh);
	
	printf("\ndia chi: ");
	fflush(stdin);
	gets(a->diachi);
	
	printf("\nngay sinh: ");
	scanf("%d %d %d",&a->ngaysinh.ngay,&a->ngaysinh.thang,&a->ngaysinh.nam);

}
void xuat(SV a)
{
	printf("\n%s %10s %10s %10d/%d/%d %10s",a.mssv,a.hoten,a.gioitinh,
	a.ngaysinh.ngay,a.ngaysinh.thang,a.ngaysinh.nam,a.diachi);
}
void nhapNSV(SV arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nnhap sinh vien thu %d: ",i+1);
		nhap(&arr[i]);
	}
}
void xuatNSV(SV arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		xuat(arr[i]);
	}
}
void timMSSV(SV *arr, char masv[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp((arr+i)->mssv,masv)==0)
			xuat(arr[i]);
	}
}
void timTen(SV *arr,char ten[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp((arr[i]).hoten,ten)==0)
		xuat(arr[i]);
	}
}
void timThang8(SV *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i].ngaysinh.thang==8)
		{
			xuat(arr[i]);
		}
	}
}
void timGioiTinh(SV *arr,char GT[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp((arr[i]).gioitinh,GT)==0)
		xuat(arr[i]);
	}
}
void timDiaChi(SV *arr,char DC[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp((arr[i]).diachi,DC)==0)
		xuat(arr[i]);
	}
}















