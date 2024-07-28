#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
	
{
	setlocale(LC_ALL,"PORTUGUESE");
	float n1,n2;
	int codigo;
	printf("insira o primeiro numero: ");
	scanf("%f", &n1);
	printf("insira o segundo numero: ");
	scanf("%f", &n2);
	printf("\ncodigo 1: Média entre os números digitados");
	printf("\ncodigo 2: Diferença do maior pelo menor");
	printf("\ncodigo 3: Produto entre os números digitados");
	printf("\ncodigo 4: Divisão do primeiro pelo segundo");
	printf("\n\n escolha um codigo: ");
	scanf("%d", &codigo);
	if(codigo==1)
	{
		printf("%f\n", ((n1+n2)/2));
	}
	else if(codigo==2)
	{
		if(n1>n2)
			printf("%f/n", n1-n2);
		else(n2>n1);
		printf("%f\n",n2-n1);		
	}
	else if(codigo==3)
	{
		printf("%f\n", n1*n2);
	}
	else(codigo==4);
	{
		printf("%f\n", n1/n2);
		system("pause");
	}
	
}
