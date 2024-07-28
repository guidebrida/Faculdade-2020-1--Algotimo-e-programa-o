#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i, quant;
	float  n2, soma, maior, menor;
	printf("Quantos numeros vao ser lidos: ");
	scanf("%d", &quant);
	for(i=1;i<=quant;i++);
	{
		printf("\n\nInforme um numero: ");
		scanf("%d", &n2);
		soma=soma+n2;
		if(n2>maior)
		maior=n2;     
      	if(n2<menor)
		menor=n2;
	}
	
	printf("O menor numero e: %f\n", maior);
	printf("O maior numero e: %f\n", menor);
	printf("A soma dos numeros informados e: %f\n", soma);
	printf("A media dos numeros e: %f ", soma/quant);
	printf("\nA quantidade de numeros informados: %d\n\n\n\n", quant);
	system("pause");
}
