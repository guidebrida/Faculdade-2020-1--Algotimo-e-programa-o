#include<stdio.h>
#include<stdlib.h>
main()
{
	int n1, n2, soma, subtracao, mult;
	printf("insira o primeiro numero");
	scanf("%d", &n1);
	printf("insira o segundo numero");
	scanf("%d", &n2);
	soma=n1+n2;
	subtracao=n1-n2;
	mult=n1*n2;
	printf("o resultado da soma e: %d\n o resultado da subtracao e:%d\n o resultado da multiplicacao e:%d\n", soma, subtracao, mult);
	system("pause");
}
