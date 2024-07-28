#include<stdio.h>
#include<stdlib.h>
main()
{
	float peso, opcao1, opcao2;
	printf("insira seu peso");
	scanf("%f", &peso);
	opcao1=peso+peso*0.15;
	opcao2=peso-peso*0.20;
	printf("se emagrecer fica com: %f\n", opcao1);
	printf("se engordar fica com: %f\n", opcao2);
	system("pause");
}
