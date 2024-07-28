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
	if(preco<50)
	{
		novo=preco*0.05+preco;
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
	if(novo<=80)
		{
			printf("\nO preço novo e barato");
		}
		else if(novo>80 && novo<120)
		{
			printf("\nO preço novo e normal");
		}
			else if(novo>=120 && novo <200)
			{
			printf("\nO preço novo e caro");
			}
					else(novo>=200);
					{
					printf("\n O preço novo e caro");
					}
	system("pause");
	
}

