#include<stdio.h>
#include<stdlib.h>
main()
{
	int n1, n2, n3;
	printf("insira o primeiro numero: ");
	scanf("%d", &n1);
	printf("insira o segundo numero: ");
	scanf("%d", &n2);
	n3=n1+n2;
	if(n3>10)
	{
		printf("O resultado e: %d\n", n3);
	}
	system("pause");
}
