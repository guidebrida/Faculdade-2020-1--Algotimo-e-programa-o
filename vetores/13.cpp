
#include<stdio.h>
#include<stdlib.h>

main()
{
	int i;
	char nome[5][20];
	float sal[3];
	for(i=0;i<3;i++)
	{
		printf("Nome: ");
		fflush(stdin);
		gets(nome[i]);
		printf("Salario: ");
		scanf("%f", &sal[i]);
	}
	
	for(i=0;i<3;i++)
	{
		printf("Nome: %s\t", nome[i]);
		printf("Salario: %f\n", sal[i]);
	}
	printf("\nAumento de 8%\n");
	for(i=0;i<3;i++)
	{
		printf("Nome: %s\t", nome[i]);
		sal[i]=sal[i]*1.08;
		printf("Salario: %f\n", sal[i]);
	}
	system("pause");
}
