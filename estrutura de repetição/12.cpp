#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i, num, somapar=0, somaimp, final;
	for(i=1;i<=5;i++)
	{
		printf("insira um numero: ");
		scanf("%d", &num);
		if(num%2==0)
		{
			printf("Seu numero e par\n");
				somapar++;
		}
		else
		{
			printf("Seu numero e impar\n");
				somaimp++;
		}
	}
	final=(100/5)*somapar;
	printf("a porcentagem de numeros pares e: %d\n", final);
	
	system("pause");
}
