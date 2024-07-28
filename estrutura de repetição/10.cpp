#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i, soma, num, neg=0;
	for(i=1;i<=20;i++)
	{
		printf("insira um numero: ");
		scanf("%d", &num);
		if(num>0)
	{
			soma=soma+num;
	}
	else
	{
			neg++;
	}		
	}
		printf("O valor somados dos numeros positivos: %d\n", soma);
		printf("A quantidade de numeros negativos e: %d\n", neg);
	system("pause");
}
