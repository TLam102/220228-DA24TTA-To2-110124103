#include"stdio.h"
#include"stdlib.h"
void xuat( int *p,int n);
int main()
{
	int *p,n;
	FILE *fp;
	char path [50];

	fp=fopen("bt28.txt","rt");

	
	if(p==NULL)
	{
		printf("\nLoi mo file");
		exit(1);
	}else
	{
		fscanf(fp,"%d",&n);
		p=(int *)malloc(sizeof(int)*n);
	
		for(int i=0;i<n;i++)
		{
		fscanf(fp,"%d",p+i);		
		}
	}
	xuat(p,n);
	
	fclose(fp);
}
void xuat( int *p,int n)
{
	printf("%d\n",n);
	for(int i=0;i<n;i++)
	{
		printf("\n%d",*(p+i));
	}
}
