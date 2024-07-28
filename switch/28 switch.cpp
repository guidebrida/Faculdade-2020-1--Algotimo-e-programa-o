#include<stdio.h>
#include<stdlib.h>
main()
{
	float peso, altura, imc;
	char nome[40];
	printf("Digite o seu nome: ");
	gets(nome);
	printf("informe o peso: ");
	scanf("%f", &peso);
	printf("informe a altura");
	scanf("%f", altura);
	printf("nome %s", nome);
	imc=peso/(altura*altura);
	if(imc<20)
	{
		printf("\n voce esta abaixo do peso \n imc: %f ", imc);
	}
		else if(imc<=25 && imc>20)
		{
			printf("\n voce esta no peso \n imc: %f", imc);
		}
		else if(imc<=30 && imc>25)
		{
			printf("\n voce esta acima do peso \n imc: %f",  imc);
		}
		else if(imc<=35 && imc>30)
		{
			printf("\n voce esta obeso \n imc: %f", imc);
		}
		else
		{
			printf("\n voce esta com obesidade morbida\n imc: %f", imc);
  		}
	system("pause");
}
