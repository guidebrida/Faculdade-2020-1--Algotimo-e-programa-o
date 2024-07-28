#include<stdio.h>
#include<stdlib.h>
main()
{
	int n1,n2;		
	printf("insira o primeiro numero: ");
	scanf("%d", &n1);
	printf("insira o segundo numero: ");
	scanf("%d", &n2);
	if(n1>n2)
	{
		printf("o maior numero e %d\n e menor numero e:%d\n", n1, n2);
		
	}
	else
	{
		printf("o maior numero e:%d\n o menor numero e:%d\n", n2,n1);
	}
	system("pause");
}
