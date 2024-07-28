#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i; 
	float numero=0, soma=0, maior=-999999, menor=999999999999999, n2;
	for(i=1;i<=5;i++)
	{
		printf("Insira um numero: ");
		scanf("%f", &numero);
		soma=soma+numero;	
		if(numero>maior)
		maior=numero;     
      	if(numero<menor)
			menor=numero;		
	}
	
	printf("O menor numero e: %f\n", maior);
	printf("O maior numero e: %f\n", menor);
	printf("a media dos numeros e: %2.f\n ", soma/5);
	
	
	
	system("pause");
}
