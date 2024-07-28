#include<stdio.h>
#include<stdlib.h>
main()
{
	int n1, n2, n3, mult;
	printf("informe o primeiro numero");
	scanf("%D", &n1);
	printf("informe o segundo numero");
	scanf("%D", &n2);
	printf("informe o terceiro numero");
	scanf("%D", &n3);
	mult=n1*n2*n3;
	printf("o resultado é: %d", mult);
	system("pause");
}
