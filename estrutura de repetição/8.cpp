#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i, idade;
	char nome[50], sexo;
	for(i=1;i<=20;i++)
	{
		printf("Qual e seu nome: ");
		fflush(stdin);
		gets(nome);
		printf("Qual seu Sexo:\nF para feminino\nM para masculino\n");
		scanf("%c", &sexo);
		printf("insira sua idade; ");
		scanf("%d", &idade);
		if(sexo=='M' && idade>21)
		{
			printf("Seu nome e: %s\nSexo: masculino\nSua idade e: %d\n ", nome, idade);
			}	
			}
			system("Pause");
}
