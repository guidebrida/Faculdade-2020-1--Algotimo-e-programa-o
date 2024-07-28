#include<stdio.h>
#include<stdlib.h>
main()
{
	char nome[30];
	int idade;
	printf("insira seu nome");
	gets(nome);
	printf("insira sua idade");
	scanf("%d", &idade);
	printf("seu nome e:%s\n Sua idade e: %d", nome, idade);
	system("pause");
	
}
