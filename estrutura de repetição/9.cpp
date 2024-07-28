#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i;
	char nome[50];
	float n1, n2, final;
	for(i=1;i<=5;i++)
	{
		printf("Nome do aluno: ");
		fflush(stdin);
	 	gets(nome);
	 	printf("insira a primeira nota ");
	 	scanf("%f", &n1);
	 	printf("insira a segunda nota ");
	 	scanf("%f", &n2);
	 	printf("O nome do aluno e: %s\n", nome);
	 	final=(n1+n2)/2;
	 	printf("a primeira nota e: %2.f\n", n1);
	 	printf("a segunda nota e: %2.f\n", n2);
	 	printf("a media aritmetica e:%2.f\n", final);
	}
	system("pause");
}
