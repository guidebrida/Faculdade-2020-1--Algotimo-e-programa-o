#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float PJ, VI, hab, porc;
	int dificuldade;
	printf("Quantas partidas voce ja jogou? "); scanf("%f", &PJ);
	printf("\nVoce possui quantas vitorias? "); scanf("%f", &VI);
	printf("Qual e a dificuldade que voce joga?\nA:dificil digite 1\nB:medio digite 2\nC:facil digite 3\n"); scanf("%d", &dificuldade);
	hab=VI/PJ;
	switch(dificuldade)
	{
	case 1: 
	if(hab<0.25)
	{
		printf("Seu nivel e: Prata");
	}
	else if(hab>=0.25 && hab<0.65)
	{
		printf("seu nivel e: Bronze");
	}
	else if(hab>=0.65 && hab<0.80)
	{
		printf("seu nivel e: ouro");
	}
	else;
	
		printf("Seu nivel e: diamante");
	break;
	case 2:
			if(hab<0.30)
	{
		printf("Sue nivel e: Prata");
	}
	else if(hab>=0.30 && hab<0.70)
	{
		printf("seu nivel e: Bronze");
	}
	else if(hab>=0.70 && hab<0.85)
	{
		printf("seu nivel e: ouro");
	}
	else;
	{
		printf("Seu nivel e: diamante");
	} break;
	case 3:
			if(hab<0.35)
	{
		printf("Seu nivel e: Prata");
	}
	else if(hab>=0.35 && hab<0.75)
	{
		printf("seu nivel  e: Bronze");
	}
	else if(hab>=0.75 && hab<0.95)
	{
		printf("seu nivel e: ouro");
	}
	else;
	{
		printf("Seu nivel e: diamante");
	}break;
	default: printf("invalida");
	}
	printf("\nsua habilidade e: %2.f\n", hab*100);
	porc=(VI/PJ)*100;
	printf("sua porcentagem de vitorias e: %2.f", porc);
system("pause");
}
