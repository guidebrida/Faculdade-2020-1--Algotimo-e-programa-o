#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int cod;
	printf("insira o codido do produto "); scanf("%d", &cod);
	switch(cod)
	{
		case 1: printf("Alimento nao perecivel\n"); break;
		case 2 ... 4: printf("Alimento perecivel\n"); break;
		case 5 ... 6: printf("Vestuario\n"); break;
		case 7: printf("Higiene pessoal\n"); break;
		case 8 ...15: printf("Limpenza e utensilios domesticos\n"); break;
		default: printf("incorreto\n");
	}
	system("pause");
}
