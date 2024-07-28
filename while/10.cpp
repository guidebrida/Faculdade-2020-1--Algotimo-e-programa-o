#include<stdio.h>
#include<stdlib.h>
main()
{
	int time, cidade, urussanga=0, criciuma=0, outros=0, moradores=0;
	float salario, media1=0, media2=0, media3=0;
	printf("Para parar digite 0 na opcao time\n\n");
	printf("Qual e seu time:\n1 Urussanga FC\n2 Santana FC\n3 outro time\n");
	scanf("%d", &time);
	while(time!=0)
	{
		printf("Em que cidade voce mora:\n1 Urussanga\n2 criciuma\n3 outra cidade\n");
		scanf("%d", &cidade);
		printf("Qual e seu salario? ");
		scanf("%f", &salario);
		switch(time)
		{
			case 1: urussanga++;
			media1=media1+salario; break;
			case 2: criciuma++; 
				if(cidade==3)
			{
				moradores++;
			}
			media2=media2+salario; break;
			case 3: outros++; 
			media3=media3+salario; break;
		
		}
		salario=0;
		printf("Qual e seu time:\n1 Urussanga FC\n2 Santana FC\n3 outro time\n ");
		scanf("%d", &time);
	}
	printf("O numero de torcedores de urussanga e: %d\n", urussanga);
	printf("O numero de torcedores de criciuma e: %d\n", criciuma);
	printf("O numero de torcedores de outros times e de: %d\n", outros);
	printf("a media salarial dos torcedores do urussanga FC e de: %f\n", media1/urussanga);
	printf("a media salarial dos torcedores do criciuma e de: %f\n", media2/criciuma);
	printf("a media salarial dos torcedores de outros clubes e de: %f\n", media3/outros);
	printf("O numero de moradores de criciuma que torcem para outros clubes e de: %d\n", moradores);
	system("pause");
}
