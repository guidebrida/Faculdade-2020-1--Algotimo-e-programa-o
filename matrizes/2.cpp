#include<stdio.h>
#include<stdlib.h>

main()
{
	int M[2][3],P[2][3],S[2][3], i, j;
	printf("Insira os numeros da matriz M\n");
	for(i=0;i<2;i++)
	{
		for( j=0; j<3; j++)
		{
			printf("[%d][%d]=", i, j); 
			scanf("%d", &M[i][j]);
		}
	}
	printf("Insira os numeros da matriz P\n");
	for(i=0; i<2; i++)
	{
	for(j=0; j<3; j++)
		{
			printf("[%d][%d]=", i, j); 
			scanf("%d", &P[i][j]);
			S[i][j]=M[i][j]+P[i][j];
		}
		}
		printf("\n");
	
	printf("\nA soma das matrizes e\n");
	for(i=0; i<2; i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t", S[i][j]);
		}
		printf("\n");
	}
	system("pause");
}
