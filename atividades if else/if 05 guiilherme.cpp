#include<stdio.h>
#include<stdlib.h>
main()
{
		int n1, n2;
	printf("informe seu primeiro numero: ");
	scanf("%d", &n1);
	printf("informe o segundo numero:");
	scanf("%d", &n2);
	if(n1>n2)
	{
		printf("%d", n1);
	}
	else
	{
		printf("%d", n2);
	}
	system("pause");
}

