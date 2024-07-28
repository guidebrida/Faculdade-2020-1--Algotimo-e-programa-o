#include<stdio.h>
#include<stdlib.h>

main()
{
	int M[2][3], i, j, SL[2]={0};
	printf("Informe os valores da Matriz M!\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d][%d]=", i, j); scanf("%d", &M[i][j]);
			SL[i]=SL[i]+M[i][j];
		}
	}
	
	for(i=0;i<2;i++)
	{
		printf("Soma da linha %d: %d\n", i, SL[i]);	
	}
	system("pause");
}
