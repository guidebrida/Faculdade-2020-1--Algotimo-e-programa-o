#include<stdio.h>
#include<stdlib.h>
main()
{
	int qnt, opcao;
	float preco, desc, final;
	printf("qual e o codigo do produto comprado ");
	scanf("%d", & opcao);
	printf("quantos produtos voce comprou ");
	scanf("%d", &qnt);
	switch(opcao)
	{
			case 1 ...10:preco=10*qnt, printf("o preco unitario do produto e 10 reais \n");
			preco=qnt*10; break;
			case 11 ...20:preco=15*qnt ;printf("o preco unitario do produto e 15 reais \n");
			preco=qnt*15; break;
			case 21 ...30:preco=20*qnt ;printf("o preco unitario do produto e :20 reais \n");
			preco=qnt*20; break;
			case 31 ...40:preco=30*qnt ;printf("o preco unitario do produto e :30 reais \n" );
			preco=qnt*30; break;
			default: printf("invalida");
	}
	printf("valor total da nota: %f reais", preco);
	if(preco<=250)
	{
	desc=preco*0.05;
	final=preco-desc;
		printf("o desconto sera de %f \n", desc);
		printf("o valor final sera de", final);
	}
	else if(preco>250 && preco<=500)
	{
			desc=preco*0.10;
			final=preco-desc;
			printf("o desconto sera de %f \n", desc);
		printf("o valor final sera de", final);
	}
	else(preco>500);
	{
		desc=preco*0.15;
		final=preco-desc;
		printf("o desconto sera de %f \n", desc);
		printf("o valor final sera de", final);
	}
		
		system("pause");
}
