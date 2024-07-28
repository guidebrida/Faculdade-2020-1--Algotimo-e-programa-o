#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	
  	setlocale(LC_ALL, "Portuguese");
  	char PL[3][5][30];
  	int i, j, estmin;
  	float Q[3][5];
  	printf("qual e o estoque minimo? ");
  	scanf("%d", &estmin);
  	for(i=0;i<3;i++)
  	{
  		for(j=0;j<5;j++)
  		{
  			printf("[%d][%d]\n", i, j);
			printf("informe o nome da planta:");
			fflush(stdin);
			gets(PL[i][j]);
			printf("\nInforme a quantidade: ");
			scanf("%f", &Q[i][j]);
		  }
  		printf("\n");
	}
	for(i=0;i<3;i++)
  	{
  		for(j=0;j<5;j++)
  		{
  			printf("\n[%d][%d]", i, j);
			fflush(stdin);
			printf("\nNome da planta: %s", PL[i][j]);
			printf("\nQuantida em estoque: %2.f", Q[i][j]);
			if(Q[i][j]<estmin)
			{
				printf("\nEm Falta Necessita de reposição\n");
			}
		  }
  		printf("\n");
	}
system("pause");	
}
  	
	
