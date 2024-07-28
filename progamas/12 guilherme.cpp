#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
	
{
	setlocale(LC_ALL,"PORTUGUESE");
	float salario, medio;
	printf("qual foi seu salario médio anual:");
	scanf("%f",&salario);
	if(salario>4000)
	{
		medio=salario*0.3;
		printf("seu saldo medio e de 30 porcento de seu salario\n seu salario e: %f\n seu saldo medio e:%f", salario, medio);
	}
	else if(salario<=4000 && salario>3000)
	{
		medio=salario*0.2;
		printf("seu saldo medio e de 25 porcento de seu salario\n seu salario e: %f\n seu saldo medio e:%f", salario, medio);
	}
	else if(salario<=3000 && salario>2000)
	{
		medio=salario*0.2;
		printf("seu saldo medio e de 20 porcento de seu salario\n seu salario e: %f\n seu saldo medio e:%f", salario, medio);	
	}
	else
	{
		medio=salario*0.1;
		printf("seu saldo medio e de 15 porcento de seu salario\n seu salario e:%f\n seu saldo medio e:%f", salario, medio);
	}
system("Pause");
}
