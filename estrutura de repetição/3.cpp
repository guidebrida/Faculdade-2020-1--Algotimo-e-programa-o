#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i, n1, nf;
	printf("insira a quantidade de numeros a ser lidos: ");
	scanf("%d", &n1);
	for(i=1;i<=n1;i++)
	{
		printf("\ninsira um numero: ");
		scanf("%d", &nf);
		nf=nf;
		printf("\nO triplo do seu numero e: %d", nf*3);
	}
	system("Pause");
}
