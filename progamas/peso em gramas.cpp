#include<stdio.h>
#include<stdlib.h>
main()
{
	float peso, peso_em_gramas;
	printf("insira seu peso");
	scanf("%f", &peso);
	peso_em_gramas=peso/1000;
	printf("seu peso em gramas e: %f\n", peso_em_gramas);
	system("pause");
}
