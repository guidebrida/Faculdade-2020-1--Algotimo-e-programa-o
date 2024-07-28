#include<stdio.h>
#include<stdlib.h>
main()
{
	int num, soma=0, maior=0, menor=0, quantidade=0, par=0, parsoma=0, impar=0;
	printf("O programa acaba quando for digitado 30000\n\n\n");
	while(num!=30000)
	{
		printf("insira um numero: ");
		scanf("%d", &num);
		if(num==30000)
		{
			break;
		}
		soma=soma+num;
		quantidade++;
		if(num>maior)
			maior=num;
		if(num<menor)
			menor=num;
		if(num%2==0)
		parsoma=parsoma+num;
		par++;
		if(num%2==1);
		impar++;
	}
	printf("A soma dos numeros digitados %d\n", soma);
	printf("A quantidade de numeros digitados: %d\n ", quantidade);
	printf("A media dos números digitados %d\n", soma/quantidade);
	printf("O maior numero digitado %d\n", maior);
	printf("O menor numero digitado %d\n", menor);
	printf("A media dos numeros pares %d\n", parsoma/par);
	printf("Porcentagem dos números impares entre todos os numeros digitados %d\n", quantidade/impar*100);
	system("pause");
}
