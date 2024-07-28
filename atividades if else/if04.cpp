#include<stdio.h>
#include<stdlib.h>
main()
{
	 float nota1, nota2, media;
	printf("informe sua primeira nota");
	scanf("%f", &nota1);
	printf("informe sua segunda nota");
	scanf("%F", &nota2);
	media= nota1+nota2/2;
	if(media>=7)
		{
			printf("voce foi aprovado\n");
			
		}
 		else if(media>=3)
 		{
 			printf("voce esta em recuperacao");
		 }
		 else
		 {
		 	printf("voce esta reprovado");
		 	
		 }
		 printf("\n sua media e: %f", media);
		 system("pause");
 }
