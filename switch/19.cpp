#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float preco, aumento, novo, imposto;
	int categoria;
	char situacao;
	printf("informe o preco: ");
	scanf("%f", & preco);
	printf("\ninfome a categoria: ");
	scanf("%d", & categoria);
	printf("\ninforme a situacao: ");
	fflush(stdin);
	scanf("%c", & situacao);
	switch(categoria)
	{
		case 1:
			if(preco<=25)
			aumento=preco*0.05;
			else
			aumento=preco*0.12; break;
		case 2:
		
			if(preco<=25)
			aumento=preco*0.08;
			else 
			aumento=preco*0.15; break;
		case 3:
			if(preco<=25)
			aumento=preco*0.10;
			else
			aumento=preco*0.18;	break;
	}
	if(categoria==2 || situacao =='R')
	imposto=preco*0.05;
	else
	imposto=preco*0.08;	
	novo=preco+aumento-imposto;
	printf("\nO valor do aumento: %f", aumento);
	printf("\nO imposto %f", imposto);
	printf("\no Novo preco sera %f", novo);
	if(novo<=50)
	printf("\nO preco esta barato");
	else if(novo>50 && novo<120)
	printf("\nO preco esta normal");
	else
	printf("\nO preco esta caro");
	
}
