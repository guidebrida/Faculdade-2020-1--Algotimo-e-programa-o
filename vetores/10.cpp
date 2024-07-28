#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[5], i, n;
	for(i=0;i<5;i++)
	{
		printf("Insira um numero: ");
		scanf("%d", &a[i]);
	}
	printf("\nDigite um elemento: ");
	scanf("%d", &n);
	for(i=0;i<5;i++)
	{
	if(n==a[i])
	{
		printf("%d, posicao %d\n", i, a[i]);
		break;
	}

	}
	if(n!=a[i])
	printf("Elemento nao encontrado\n");
	

	system("pause");
}

