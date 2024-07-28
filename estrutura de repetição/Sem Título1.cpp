#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i;
	float raiz, final;
	for(i=1;i<=4;i++)
	{
		printf("insira um numero: ");
		scanf("%f", &raiz);
		final=sqrt(raiz);
		printf("A raiz quadrada e: %f\n", final);
	}
	system("pause");
}
