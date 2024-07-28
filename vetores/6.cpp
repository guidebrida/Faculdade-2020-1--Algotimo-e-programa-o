#include<stdlib.h>
#include<stdio.h>
main()
{

	int n[10], i, menor=9999999, maior=-999999999999, pma, pmm;
	for(i=0;i<10;i++)
	{
		printf("digite um numero\n");
		scanf("%d", &n[i]);
		if(n[i]>maior)
		{	
			maior=n[i];
			pma=n[i];
		}
		if(n[i]<menor)
		{	
			menor=n[i];
			pmm=n[i];
		}
	}
	printf("\listagem dos numeros\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n", n[i]);
	}
	printf("a diferenca dos valores do maior pro menor e de %d\n", maior);
	printf("A posicao do maior e %d\nE a do menor e %d\n", pma, pmm);
	system("pause");
}
