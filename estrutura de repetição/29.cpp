#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
		int i, idade, i15=0, i30=0, i45=0, i60=0, i1000=0;
		float media1, media2;
		for(i=1;i<=8;i++)
		{
			printf("qual e sua idade: ");
			scanf("%d", &idade);
			switch(idade)
			{
				case 1 ... 15: i15++; break;
				case 16 ... 30: i30++; break;
				case 31 ... 45: i45++; break;
				case 46 ... 60: i60++; break;
				case 61 ... 1000: i1000++; break;
			}	
		}
		media1=(100/8)*i15;
		media2=(100/8)*i1000;
		printf("a quantidade de pessoa na faixa etaria ate 15 anos e: %d\n", i15);
		printf("a quantidade de pessoa na faixa etaria 16 a 30 anos e: %d\n", i30);
		printf("a quantidade de pessoa na faixa etaria 31 a 45 anos e: %d\n", i45);
		printf("a quantidade de pessoa na faixa etaria 46 a 60 anos e: %d\n", i60);
		printf("a quantidade de pessoa na faixa etaria acima de 60 anos e: %d\n", i1000);
		printf("a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas e de: %f\n", media1);
		printf("a porcentagem de pessoas na ultima faixa etária com relação ao total de pessoas e de: %f\n", media2);
		
		
	
system("pause");	
}
