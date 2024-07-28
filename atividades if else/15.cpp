#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
	
{
	setlocale(LC_ALL,"PORTUGUESE");
	float preco, novo;
	printf("informe o preço: %f");
	scanf("%f", &preco);
	fflush(stdin);
	if(preco<50)
	{
		novo=preco*1.05;
	}
	else if (preco>50 && preco <=100)
	{
		novo=preco*0.10+preco;

	}
	else(preco>100);
	{
		novo=preco*0.15+preco;
	}
	printf("\nO novo preço sera: %f", novo);
	system("pause");
	
	}
