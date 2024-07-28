#include<stdio.h>
#include<stdlib.h>
main()
{
	int A[5], i, maior=-99999, menor=9999999; 
	float soma=0;
	for(i=0;i<5;i++)
	{
		printf("Informe um numero: ");
		scanf("%d", &A[i]);
		soma=soma+A[i];
		if(A[i]>maior)
		{	
			maior=A[i];
		}
		if(A[i]<menor)
		{	
			menor=A[i];
		}
	}
	printf("\nVetor\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n", A[i]);
	}
	printf("\nMaior numero: %d\n", maior);
	printf("Menor numero: %d\n", menor);
	printf("media: %f",soma/5);
	system("pause");
}
