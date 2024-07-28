#include<stdlib.h>
#include<stdio.h>
main()
{

	int n[5], i, neg;
	for(i=0;i<5;i++)
	{
		printf("digite um numero\n");
		scanf("%d", &n[i]);
		if(n[i]<0)
		{
			neg=i;
			break;
		}else
		if(~n[i]<0)
		{ printf("Negativo nao encontrado");
		}
	}
	
	printf("a posição do numero negativo e %d\n" ,neg);

	
	system("pause");
}
