#include<stdlib.h>
#include<stdio.h>
main()
{

	int n[7], i;
	for(i=0;i<7;i++)
	{
		printf("digite um numero\n");
		scanf("%d", &n[i]);
	}
	printf("\listagem dos numeros\n");
	for(i=0;i<7;i++)
	{
		printf("%d\n", n[i]);
	}
	system("pause");
}
