#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i, n, soma;
	printf("informe um numero: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		soma=soma*i;
		printf("Numero e: %d\n", soma);
	}
	
	printf("a soma das multiplicacoes e: %d\n", soma);
	system("pause");
}
