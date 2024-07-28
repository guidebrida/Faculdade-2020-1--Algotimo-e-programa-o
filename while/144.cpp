#include<stdio.h>
#include<stdlib.h>
main()
{
	int opcao;
	float salario, imposto, novosalario;
	printf("Menu de opçoes:\n1 Imposto\n2 Novo salario\n3 Classificacao\n4 Finalizar o programa\nDigite a opcao desejado ");
	scanf("%d", &opcao);
	while(opcao!=4)
	{
		switch(opcao)
		{		
		case 1:
		 		printf("qual e seu salario?\n");
		 		scanf("%f", &salario);
		 		if(salario<500)
		 		{
		 			imposto=(salario/100)*5;
		 			printf("valor do imposto e de %f\n", imposto);
				 }
				else if(salario>=500 && salario<850)
				{
					imposto=(salario/100)*10;
		 			printf("valor do imposto e de %f\n", imposto);
				 }
				 else;
				 {
				 	imposto=(salario/100)*15;
		 			printf("valor do imposto e de %f\n", imposto);
				  } 
		case 2:
			if(salario>1500)
			{
				novosalario=salario+25;
				printf("Novo salario e: %f\n", novosalario);
			}
			else if(salario>=750 && salario<=1500)
			{
				novosalario=salario+50;
				printf("Novo salario e: %f\n", novosalario);
			}
			else if(salario>=450 && salario<750)
			{
				novosalario=salario+75;
				printf("Novo salario e: %f\n", novosalario);
			}
			else;
			novosalario=salario+100;
			printf("Novo salario e: %f\n", novosalario);		
		case 3: 
		printf("qual e seu salario?");
 		scanf("%f", &salario);
		if(salario>750)
		{
			printf("bem remunerado\n");
		}
		else printf("mal remunerado\n");
		}
	printf("Menu de opções:\n1. Imposto\n2. Novo salario\n3. Classificacao\n4. Finalizar o programa\nDigite a opcao desejado ");
	scanf("%d", &opcao);
	}

	system("pause");
}
