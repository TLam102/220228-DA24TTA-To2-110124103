struct date{
	int ngay;
	int thang;
	int nam;
};

struct  SinhVien{
	char mssv[10];
	char hoTen[50];
	char maLop[10];
	
	date ngaySinh;
	float mon1;
	float mon2;
	float mon3;
	float diemTB;
};
typedef SinhVien SV;
#include"stdio.h"
//#include"string.h"
#include<stdlib.h>

void xoaXuongDong(char x[]);
int kienTraSV(SV *a,int n);
void nhapSVN(SV a[],int n);
void nhapSV(SV &sv);
void xuatSV(SV sv);
void inSV(SV a[],int n);
void DTB(SV *sv);

int main()
{	SV sv;
	SV a[10];
	SV mssv[10];
	int n;
	
	printf("nhap so sv:  ");
	scanf("%d",&n);
	
	nhapSVN(a,n);
	DTB(&sv);
	inSV(a,n);
	kienTraSV (a,n);
	
	
	return 0;
}
void nhapSV(SV &sv)
{	
	printf("\nmssv: "); 
	fflush(stdin);
	fgets(sv.mssv,sizeof(sv.mssv),stdin);
	xoaXuongDong(sv.mssv);
	
	
	printf("\nHo Ten: "); 
	fflush(stdin);
	fgets(sv.hoTen,sizeof(sv.hoTen),stdin);
	xoaXuongDong(sv.hoTen);
	
	printf("\nMa Lop: ");
	fflush(stdin);
	fgets(sv.maLop,sizeof(sv.maLop),stdin);
	xoaXuongDong(sv.maLop);
	
	printf("\nNgay Sinh: ");
	fflush(stdin);
	scanf("%d%d%d",&sv.ngaySinh.ngay,&sv.ngaySinh.thang,&sv.ngaySinh.nam); 

    printf("\nToan: ");
    fflush(stdin);
    scanf("%f",&sv.mon1);
    
    
    printf("\nLy: ");
    fflush(stdin);
    scanf("%f",&sv.mon2);
    
    
    printf("\nHoa: ");
    fflush(stdin);
    scanf("%f",&sv.mon3);
    
    
}
void xuatSV(SV sv){
	printf("\n%5s \t %10s \t %10s \t %2d/%d/%d \t %.2f \t %.2f \t %.2f \t %.2f",
	       sv.mssv, sv.maLop, sv.hoTen, sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam,sv.mon1,sv.mon2,sv.mon3,sv.diemTB);
    	
}
void inSV(SV a[],int n )
{	
	system("cls");
	printf("\n%5s \t %10s \t %10s \t %10s \t %2s \t %2s \t %2s \t %2s","mssv","Ma Lop","Ho Ten","Ngay Sinh","Toan","Ly","Hoa","DTB");
	printf("\n");
	for(int i=0;i<n;i++)
	{
		 xuatSV(a[i]);
	}
}
/*void xoaXuongDong(char x[])
{
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}*/
void nhapSVN(SV a[],int n)
{
	 
	for (int i=0;i<n;i++)
	{
		printf("\nnhap sv thu %d: ",i+1);
		nhapSV(a[i]);
	}
}
int kienTraSV(SV *a,int n)
{
	
	char maSV[10];
		
	fflush(stdin);
	printf("\nnhap mssv can kiem tra: ");
	gets(maSV);
	
	for(int i=0;i<n;i++)
	{
		if(strcmp((a+i)->mssv, maSV)==0)
		{
			//return 1;
			xuatSV(a[i]);
		}
	
	}
	return 0;
}
void DTB(SV *sv)
{
	sv->diemTB = (sv->mon1 + sv->mon2 + sv->mon3 ) / 3;
}


























