#include<stdio.h>
#include<stdlib.h>
main()
{
	int M[2][3],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d][%d]=", i, j); 
			scanf("%d", &M[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
		{
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
}
