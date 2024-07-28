#include<stdio.h>
#include<stdlib.h>
main()
{
	int cod, quant;
	float valor;
	printf("informe o codigo do produto comprado: ");
	scanf("%d", &cod);
	printf("\n informe a quantidade comprada do produto: ");
	scanf("%d", &quant);
	switch(cod)
	{
		case 1 ... 10: printf("\n o preco unitario do produto e 10 reais\n");
		valor=quant*10;
		break;
		case 11 ... 20: printf("\n o preco unitario do produto e 15 reais\n");
		valor=quant*15;
		break;
		case 21 ... 30: printf("\n o preco unitario do produto e 20 reais\n");
		valor=quant*20;
		break;
		case 31 ... 40: printf("\n o preco unitario do produto e 30 reais\n");
		valor=quant*30;
		break;
		default: printf("invalida");
	}
	printf("valor total da nota: %f ", valor);
	if(valor<250)
		{
			printf("\n 5 por cento de desconto: %2.f reais\n", valor*0.05);
			printf("\nValor total da nota: %2.f reais \n", valor-(valor*0.05));
		}
	else if(valor>250 && valor>500)
	{
			printf("\n 5 por cento de desconto: %2.f reais\n", valor*0.1);
			printf("\nValor total da nota: %2.f reais \n", valor-(valor*0.1));
		}	
	else
	{
			printf("\n 5 por cento de desconto: %2.f reais\n", valor*0.15);
			printf("\nValor total da nota: %2.f reais \n", valor-(valor*0.15));
		}	
	system("pause");

}
