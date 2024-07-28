#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	
  	setlocale(LC_ALL, "Portuguese");
  	int i, j, maior=0;
  	float nota[5][4], media[5], mediaturma=0; 
  	for(i=0;i<5;i++)
  	{
  		for(j=0;j<4;j++)
  		{
  			printf("Insira a %d° nota ", j+1);
  			scanf("%f", &nota[i][j]);
  			media[i]=media[i]+nota[i][j]; 	
		  }
		mediaturma=mediaturma+media[i];
		printf("\n");
	  }
	  printf("A media da turma e de %f\n", mediaturma/20);
	  for(i=0;i<5;i++)
	  {
	  	
	  	printf("a media do aluno n%d° e: %f\n", i+1, media[i]/4);
	  	 if(media[i]/4>mediaturma/20);
	  	 {
	  	 	printf("A media do aluno e maior que da turma\n");
	  	 	maior++;
	    }
	  		
	  }
	  printf("\n%d alunos tiveram notas maiores que a media da turma\n", maior);
	  
system("pause");	  
}
