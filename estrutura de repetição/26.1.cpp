#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
	
{
		setlocale(LC_ALL,"PORTUGUESE");
		int i, aprovados=0, exames=0, reprovados=0;
		float n1=0,n2=0, media=0, mediaturma=0;
		for(i=1;i<=6;i++)
		{
			printf("insira a primeira nota: ");
			scanf("%f", &n1);
			printf("insira a segunda nota: ");
			scanf("%f", &n2);
			media=(n1+n2)/2;
			printf("sua media e: %f\n", media);
			mediaturma=mediaturma+media;
	 	if(media<3)
			{
			printf("Voce esta reprovado\n");
			reprovados++;	
			}
			else if(media<7 && media>=3)
			{
				printf("Voce esta em exames\n");
				exames++;
			}
			else(media>=7);
			printf("Você foi aprovado\n");
			aprovados++;
		}	
			
		
		mediaturma=media+media;
		printf("\nO total de alunos aprovados e: %d", aprovados);
		printf("\nO total de alunos em exames e %d", exames);
		printf("\nO total de alunos reprovados e %d", reprovados);
		printf("\nA media da classe e: %f\n", mediaturma/2);
		system("pause");
}
