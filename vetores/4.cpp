#include<stdlib.h>
#include<stdio.h>
main()
{
	int n[5], i, somaA, somaB;
	for(i=0;i<5;i++)
	{
		printf("digite um numero\n");
		scanf("%d", &n[i]);
		somaA=somaA+n[i];
	}
	printf("\listagem dos numeros\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n", n[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("digite um numero\n");
		scanf("%d", &n[i]);
		somaB=somaB+n[1];
	}
	printf("\listagem dos numeros\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n", n[i]);
	}
	printf("\nSoma: %d", somaA+somaB);
	
	system("pause");
	
}
