#include<stdio.h>
#include<stdlib.h>

main()
{
	int conta, num=0, positivo=0, negativo=0;
	float saldo, saldofinal;
	char nome[50];
	printf("Informe sua conta: ");
	scanf("%d", &conta);
	while(conta!=-999 && num<5)
	{
		num++;
		printf("Qual e seu nome? ");
		fflush(stdin);
		gets(nome);
		printf("informe seu saldo bancario: ");
		scanf("%f", &saldo);
		saldofinal=saldofinal+saldo;
		printf("Conta: %d\nSaldo: %f", conta, saldo);
		if(saldo>0)
		{
			printf(" positivo\n");
			positivo++;
		}
		else 
		{
			printf(" negativo\n");
			negativo++;
		}
			printf("Informe o numero da conta: ");
		scanf("%d", &conta);
		}
		printf("Total de clientes da agencia: %d\n", num);
		printf("Total de clientes com saldo negativo: %d\n", negativo);
		printf("Percentual de clientes com saldo positivo: %f\n", positivo/num*100);
		printf("Saldo da agencia: %f\n", saldofinal);
		system("pause");
}
