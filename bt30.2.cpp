#include"stdio.h"
main()
{
	/*khai bao bien*/
	int a[3][3]={{1,2,-3},{4,-5,6,},{-7,8,9}};
	int m=3;
	FILE *fp;
	char path[50];
	
	printf("\nnhap duong dan: ");
	fflush(stdin);
	gets(path);
	fp=fopen(path,"wt");
	if(fp==NULL)
		printf("\nLoi mo file");
	else
	{
		fprintf(fp,"\ncac phan tu cua mang: ");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
			fprintf(fp,"%3d",a[i][j]);
	}
	fprintf(fp,"\ncac phan tu duong trong mang: ");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>0)
			{
				fprintf(fp,"%3d",a[i][j]);
			
			}
		}
	}
	/* tinh tong cac phan tu duong*/
	int s=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>0)
			{
				s=s+a[i][j];
			}
		}
	fprintf(fp," \ntong cac phan tu duong : %d",s);
	fclose(fp);
	}
}}

