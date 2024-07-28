#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int idade ,pontos, op1, op2 ,op3, peso, total, fuma;
	printf("Voce fuma?\n1 para sim\n2 para nao");
	scanf("%d", fuma);
	switch(fuma)
	{
		case 1: op1=2; break;
		case 2: op1=0; break;
		default: printf("incorreto\n");
	}
	printf("qual e seu peso");
	scanf("%d", &peso);
	switch(peso)
	{
		case 1: peso<60 op2=1; break;
		case 2: peso>=60 && peso<90 op==2; break;
		case 3: peso>90 op2=5; break;
		default: printf("incorreto\n");
	}
	printf("quantos anos voce tem?");
	scanf("%d", &idade);
		switch(idade)
	{
		case 1: idade<=30 op3=1; break;
		case 2: idade>30 && idade<=45 op3=2; break;
		case 3: idade>45 op3=3; break;
		default: printf("incorreto\n");
	}
	total=op1+op2+op3;
	switch(total)
	{
	case 1 ... 3:printf("o valor do seu plano sera de: 105.00 reais"); break;
	case 4 ... 7:printf("o valor do seu plano sera de: 125.00 reais"); break;
	case 7 ... 1000: printf("o valor do seu plano sera de: 160.00 reais"); break;
		default: printf("incorreto\n");
	}
	system("Pause");	
}
