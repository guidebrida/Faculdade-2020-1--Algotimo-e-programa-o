#include<stdio.h>
#include<stdlib.h>
main()
{
	float joao, carlos;
	int cont=0;
	printf("Qual o salario de carlos "); scanf("%f", &carlos);
	joao=carlos/3;
	while(carlos>joao)
	{
		cont++;
		carlos=carlos+carlos*0.02;
		joao=joao+joao*0.05;
		printf("O salario de carlos e de %f\n", carlos);
		printf("O salario de joao e de %f\n", joao);
	}
	printf("Foi necessario %d meses para joao ultrapasar carlos", cont);
	system("pause");
}
