#include<stdlib.h>
#include<stdio.h>
main()
{
	int n[5], i;
	for(i=0;i<5;i++)
	{
		printf("Informe um numero\n");
		scanf("%d", &n[i]);
	}
	printf("Ordem: \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n", n[i]);
	}
	printf("reverso: \n");
	for(i=4;i>=0;i--)
	{
		printf("%d\n", n[i]);
	}
	system("pause");
}
