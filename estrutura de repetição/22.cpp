#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	char nome[50];
	int i, cont2children=0, cont1children=0;
	float salario, filhos, somaf2=0, somaf1=0, media1c=0,media2c=0 ; 
	for(i=1;i<5;i++)
	{
	printf("\nInsira seu nome: ");
	fflush(stdin);
	gets(nome);
	printf("\ninsira seu salario: ");
	scanf("%f", &salario);
	printf("\nquantos filhos voce tem? ");
	scanf("%f", &filhos);
	if(filhos==2)
	{
		somaf2=somaf2+salario;
		cont2children++;
	}
	else(filhos==1);
	{
		somaf1=somaf1=salario;
		cont1children++;
	}
	}
	media2c=somaf2/cont2children;
	media1c=somaf1/cont1children;
	printf("\n\nA media salarial de quem possui um filho e de %f", media1c);
	printf("\nA media salarial de quem possui dois filhos e de %f", media2c);
	if(media1c>media2c)
	{
		printf("\nA media salarial de quem possui um filho e maior\n");
	}
	else;
	{
		printf("\nA media salarial de quem possui dois filhos e maior\n");
	}

system("pause");
}
