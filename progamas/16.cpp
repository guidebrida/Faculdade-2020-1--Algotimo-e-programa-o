#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
	
{
	setlocale(LC_ALL,"PORTUGUESE");
	int preco, cod;
	printf("insira o preço do produto: %d\n", preco );
	scanf("%d", preco);
	printf("insira o codigo de origem do mesmo %d", cod);
	scanf("%d", cod);
	if(cod==1)
	{
	printf("o preço e: %d\n a origem dele e: sul", preco);
	}
	else if(cod==2)
	{
	printf("o preço e: %d\n a origem dele e: norte", preco);
	}
		else if(cod==3)
	{
	printf("o preço e: %d\n a origem dele e: leste", preco);
	}
		else if(cod==4)
	{
	printf("o preço e: %d\n a origem dele e: oeste", preco);
	}
		else if(cod==5 && cod ==6)
	{
	printf("o preço e: %d\n a origem dele e: nordeste", preco);
	}
		else if(cod==7 && cod==8 && cod==9)
	{
	printf("o preço e: %d\n a origem dele e: sudeste", preco);
	}
		else if(cod>=10 && cod<=20)
	{
	printf("o preço e: %d\n a origem dele e: centro-oeste", preco);
	}
		else if(cod>=21&& cod<=30)
	{
	printf("o preço e: %d\n a origem dele e: nordeste", preco);
	}
	system("pause");
}
