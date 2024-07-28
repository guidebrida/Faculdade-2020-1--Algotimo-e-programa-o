#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int cod;
	float  salario, novo;
	printf("qual seu salario atual:");
	scanf("%f", &salario);
	printf("codigo 1: escriturario:\n ");
	printf("codigo 2: secretario:\n ");
	printf("codigo 3: caixa:\n ");
	printf("codigo 4: gerente:\n ");
	printf("codigo 5: diretor\n");
	scanf("%d", &cod);
	switch(cod)
	{
		case 1:
		novo=salario*0.50+salario;
		printf("seu novo salario e: %f", novo); break;
	case 2:
			novo=salario*0.35+salario;
		printf("seu novo salario e: %f", novo); break;
	case 3:
			novo=salario*0.20+salario;
		printf("seu novo salario e: %f", novo); break;
	case 4:
			novo=salario*0.10+salario;
		printf("seu novo salario e: %f", novo); break;
	case 5:
			novo=salario;
		printf("seu novo salario e: %f", novo); break;
		default: printf("invalida");
	}
	system("pause");

}	
