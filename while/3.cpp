#include<stdio.h>
#include<stdlib.h>
main()
{
	int num, soma=0;
	while(num>=0)
	{
		printf("insira um numero ");
		scanf("%d", &num);
		printf("O numero informado e: %d\n", num);
		soma++;
		
	}
	printf("\n\n\nA quantidades de numeros informados e de: %d", soma);
}
