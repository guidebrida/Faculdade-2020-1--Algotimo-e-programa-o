#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	int i, n;
	float peso, somaidade=0, idade=0, pesomedio=0, somapeso=0, idademedia=0;
	for(i=1;i<=3;i++)
	{
		for(n=1;n<=5;n++)
		{
			printf("informe a idade: ");
			scanf("%f", &idade);
			printf("Informe seu peso: ");
			scanf("%f", &peso);
			somaidade=somaidade=idade;
			somapeso=somapeso+peso;
		}
		pesomedio=pesomedio+somapeso;
		idademedia=idademedia+somaidade;
		printf("Media de idade da equipe %d: %f\n", i, somaidade);
		printf("Media de peso da equipe %d: %f\n", i, somapeso/5);
		somapeso=0;
		somaidade=0;
	
	}
		printf("media de peso de todas as equipes %f\n", pesomedio/15);
		printf("media de idade de todas as equipes: %f\n", idademedia/15);
	system("pause");
}
