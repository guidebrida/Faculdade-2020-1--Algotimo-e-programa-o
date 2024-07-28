#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i, n, soma;
	printf("informe um numero: ");
	scanf("%d", &n);
	if(n>=0)
	{
		for(i=1;i<=n;i++)
	{
		soma=soma*i;
		printf("Numero e: %d\n", soma);
	}
	}
	else
	{
		printf("erro 404\n");
	}

	if(n>=0)
	{
	printf("a soma das multiplicacoes e: %d\n", soma);
	}
	else
	{
		printf("nao e possivel efetuar a multiplicacao\n");
	}

	system("pause");
}
