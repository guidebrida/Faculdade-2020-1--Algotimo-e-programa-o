#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int opcao;
	float imposto, salario, novo;
	printf("Qual e seu salario? ");
	scanf("%f", &salario);
	printf("Menu de opcoes\n");
	printf("opcao 1: imposto\n");
	printf("opcao 2: novo salario\n");
	printf("opcao 3: Classificacao\n");
	printf("Escolha uma opcao ");
	scanf("%d", &opcao); 
	switch(opcao)
	{
		case 1:
			if(salario>1000)
			{
				imposto=salario*0.05;
				printf("voce tera que pagar %f de imposto.", imposto);
			}
		else if(salario>=1000 && salario <=2500)
		{
			imposto=salario*0.10;
			printf("voce tera que pagar %f de imposto.", imposto);
		}
		else
		{
			imposto=salario*0.15;
				printf("voce tera que pagar %f de imposto.", imposto); break;
		}
		case 2:
			if(salario>3000)
			{
				novo=salario+25;
				printf("seu novo salario sera %f", novo);
			}
			else if(salario<=3000 && salario>2000)
			{
				novo=salario+50;
				printf("seu novo salario sera %f", novo);
			}
			else if(salario<=2000 && salario>1000)
			{
				novo=salario+75;
				printf("seu novo salario sera %f", novo);
			}
			else
			{
				novo=salario+100;
				printf("seu novo salario sera %f", novo);
			}break;
		
			
		case 3:
				if(salario<700)
				printf("mal remunerado\n");
				else
				printf("bem remunerado\n");
	}
system("pause");
}
