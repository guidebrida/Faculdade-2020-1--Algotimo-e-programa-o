#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
	
{
	setlocale(LC_ALL,"PORTUGUESE");
	int cod;
	printf("insira o codigo de origem do produto %d", cod);
	scanf("%d", cod);
	if(cod==1)
	{
	printf("a origem dele e: sul");
	}
	else if(cod==2)
	{
	printf("a origem dele e: norte");
	}
		else if(cod==3)
	{
	printf("a origem dele e: leste" );
	}
		else if(cod==4)
	{
	printf("a origem dele e: oeste");
	}
		else if(cod==5 && cod ==6)
	{
	printf("a origem dele e: nordeste");
	}
		else if(cod==7 && cod==8 && cod==9)
	{
	printf("a origem dele e: sudeste");
	}
		else if(cod>=10 && cod<=20)
	{
	printf("a origem dele e: centro-oeste");
	}
		else if(cod>=21&& cod<=30)
	{
	printf(" a origem dele e: nordeste");
	}
	system("pause");
}
