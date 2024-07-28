#include<stdio.h>
#include<stdlib.h>
main()
{
	float vendas[12][4], mes[12]={0}, semana[4]={0}, total=0;
	int i, j;
	for(i=0;i<12;i++)
	{
		printf("\nMes %d\n", i+1);
		for(j=0;j<4;j++)
		{
			printf("Vendas %d: ", j+1);	
			scanf("%f", &vendas[i][j]);
		}
	}
	
	for(i=0;i<12;i++)
	{
		for(j=0;j<4;j++)
		{
			mes[i]=mes[i]+vendas[i][j];
			semana[j]=semana[j]+vendas[i][j];
			total=total+vendas[i][j];
		}
		printf("Total vendido no mes %d: %f\n", i+1, mes[i]);
	}
	for(j=0;j<4;j++)
	{
		printf("Total vendido na semana %d: %f\n", i+1,semana[j]);
	}
	printf("Total de vendas no ano: %f", total);
	system("pause");
}
