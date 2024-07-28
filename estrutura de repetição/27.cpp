#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
			setlocale(LC_ALL,"PORTUGUESE");
			int i, n;
			float nota, soma=0, media=0, mediaturma=0,c5=0;
			for(i=1;i<=5;i++)
			{
				printf("Aluno numero %d\n", i);
				for(n=1;n<=2;n++)
				{
					printf("informe a nota %d ", n);
					scanf("%f", &nota);
					soma=soma+nota;	
				}
				media=soma/2.0;
				if(media>=5)
				{
					c5++;
				}
				soma=0;
				mediaturma=mediaturma+media;
				printf("Media do aluno %d: %f\n", i, media);
			}
			printf("Media da turma e: %f\n", mediaturma/5);
			printf("Percentual de alunos com media igual ou superior a 5 %f\n", c5);
			system("pause");
}
