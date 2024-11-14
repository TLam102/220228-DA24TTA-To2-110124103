#include"stdio.h"
int main()
{
	float dtb;
	printf("nhap diem trung binh: ");
	scanf("%f",&dtb);
	if(dtb>9,5)
		printf("\nXuat sac");
	else 
		if(dtb>8.5)
			printf("\nGoi");
		else 
			if(dtb>6.5)
				printf("\nKha");
			else
				if(dtb>5)
					printf("\nTrung binh");
				else
				printf("\nYeu");
				
	return 0;
}
