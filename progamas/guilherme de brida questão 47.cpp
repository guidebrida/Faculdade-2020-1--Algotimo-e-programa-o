#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	float original, lucro, impostos, final;
	printf("preço original de fabrica");
	scanf("%f", &original);
	printf("qual sera a porcentagem do lucro do fabricante?");
	scanf("%f", &lucro);
	printf("qual e a porcentagem de impostos?");
	scanf("%f", &impostos);
	final=(original*lucro/100)+(original*impostos/100)+original;
	printf("o valor total do carro e:%f\n", final);
	system("pause");
	 
}
