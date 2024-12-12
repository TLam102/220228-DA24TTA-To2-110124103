#include"stdio.h"
main()
{
	/*khai bao bien*/
	int a[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
	int m=3;
	FILE *fp;
	char path[50];
	  
	/*NHAP DUONG DAN TAP TIN CAN GHI DU LIEU*/
	printf("\nnhap duong dan: ");
	fflush(stdin);
	gets(path);
	
	/*MO TAP TIN DE GHI DU LIEU*/
	fp=fopen(path,"wt");
	/*KT CO MO DUOC TAP TIN HAY KHONG*/
	if(fp==NULL)
	{
		printf("\nLoi mo file");
		
	}
	else
	{
		/*ghi so dong*/
		fprintf(fp,"%d\n",m);
		/*ghi tung dong dl*/
		
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			fprintf(fp,"%3d",a[i][j]);
			
		}
		/*ghi ky tu ngat dong*/
		fprintf(fp,"\n");
	}
	/*dong tap tin*/
	fclose(fp);
}
