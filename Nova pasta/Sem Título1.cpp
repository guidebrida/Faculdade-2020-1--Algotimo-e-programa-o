
#include<stdio.h>
#include<stdlib.h>

main()
{
	float valor[7][12], valorano=0, valortotal, ano=2012, mes=1;
	int i, j;
	for(i=0;i<=7;i++)
	{
		ano++;
		for(j=0;j<=12;j++)
		{
			printf("Ano %2.f Mes %2.f:", ano, mes);
			scanf("%f\n", &valor[i][j]);
			mes++;
		}
	}
	for(i=0;i<=7;i++)
	{
	
	for(j=0;j<=12;j++)
	{
			valorano+=valorano+valor[i][j];	
		}
		printf("\nValor medio da cesta basica do ano %d: %f", valorano/12);
		valortotal=valortotal+valorano;
		valorano=0;
	}
	  {
	  	printf("\nValor medio no periodo total %f", valortotal/7);
	  }
		
	
system("pause");
}
