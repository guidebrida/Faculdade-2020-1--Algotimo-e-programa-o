#include<stdio.h>
#include<stdlib.h>
main()
{
	float sal, aumento;
	printf("informe seu salario");
	scanf("%f", &sal);
	aumento=(sal*0.25)+sal;
	printf("seu novo salario e: %f\n", aumento);
	system("pause");
}
