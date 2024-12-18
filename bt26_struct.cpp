#include"stdio.h"

struct SACH{
	char ma[10];
	char ten[100];
	char tacgia[100];
	char nhaxuatban[300];
	int namxuatban;
	float gia;
	int soluong;
	float thue;
	float thanhtien;
	float thuctien;
};
typedef struct SACH S;
void nhap(S *a);
void inSach(S a);
float thanhTien(int n,S *a);
float thucTien(int n,S *a);
void sapGiamNXB(S *arr,int n);
void nhapNSach(S *arr,int n);
void inNSach(S arr[],int n);
float ThucTienLN(int n,S *arr);

int main()
{
	S a;
	S arr[100];
	int n; 
	
	printf("\nnhap n: ");
	scanf("%d",&n);
	
	nhapNSach(arr,n);
	inNSach(arr,n);
	
	thanhTien(n,&a);
	thucTien(n,&a);
	
	sapGiamNXB(arr,n);
	printf("\nSau khi sap giam : ");
	inNSach(arr,n);
	
	printf("\n sach co thuc tien lon nhat : ");
	ThucTienLN(n,arr);
	
	
	
	
	return 0;
}
void nhap(S *a)
{
	printf("\nMA sach :");
	fflush(stdin);
	gets(a->ma);
	
	printf("\nTEN Sach :");
	fflush(stdin);
	gets(a->ten);
	
	printf("\nTAC GIA :");
	fflush(stdin);
	gets(a->tacgia);
	
	printf("\nNHA XUAT BAN :");
	fflush(stdin);
	gets(a->nhaxuatban);
	
	printf("\nSO LUONG NHAP :");
	scanf("%d",&a->soluong);
	
	printf("\nGIA :");
	scanf("%f",&a->gia);
	
	printf("\nTHUE:");
	scanf("%f",&a->thue);
	
	printf("\nthanh tien :");
	scanf("%f",&a->thanhtien);
	
	printf("\nTHUC TIEN :");
	scanf("%f",&a->thuctien);
	
	printf("\nNAM XUAT BAN: ");
	scanf("%d",&a->namxuatban);
}
void nhapNSach(S *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nnhap loai thu %d: ",i+1);
		nhap(&arr[i]);
	}
}
void inNSach(S arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		inSach(arr[i]);
	}
	
}
void inSach(S a)
{
	printf("\n%s \t%s \t%s \t%d \t%.f \t%s \t%d \t%.f \t%.f \t%.f ",a.ma,a.ten,a.tacgia,a.soluong,
	a.gia,a.nhaxuatban,a.namxuatban,a.thue,a.thanhtien,a.thuctien);
}
float thanhTien(int n,S *a)
{
	a->thanhtien=a->soluong*n;
	
}
float thucTien(int n,S *a)
{
	a->thuctien=a->thanhtien+a->thue;
}
void sapGiamNXB(S *arr,int n)
{ 
	S tmp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i].namxuatban>arr[j].namxuatban)
			{
				tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
}
float ThucTienLN(int n,S *arr)
{
	
	for(int i=0;i<n;i++)
	{
		if(arr[i+1].thuctien>arr[0].thuctien)
		{
			arr[0]=arr[i+1];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i+1].thuctien= arr[0].thuctien)
			inSach(arr[i+1]);
	}
}












