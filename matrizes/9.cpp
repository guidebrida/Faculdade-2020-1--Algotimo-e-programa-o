#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	
  	setlocale(LC_ALL, "Portuguese");
	float M[3][5],maior=-999;
	int i, j;
	char AT[3][5][30];
	printf("insira as informações a seguir\n");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<5;j++)
		{
			
			printf("[%d][%d]\n", i, j);
			printf("informe o nome do atleta:");
			fflush(stdin);
			gets(AT[i][j]);
			printf("\nInforme a altura: ");
			scanf("%f", &M[i][j]);
			
		}
		printf("\n");
		
	}
	for(i=0;i<3;i++)
	{
		printf("\nDelegação %d\n", i+1);
		for(j=0;j<5;j++)
		{
			
			printf("Nome: %s\n", AT[i][j]);
			if(M[i][j]>maior)
				maior=M[i][j];
		}
		printf("Maior altura: %f", maior);
		maior=-999;
	}			
	system("pause");
}

