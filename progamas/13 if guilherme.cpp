#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
	
{
	setlocale(LC_ALL,"PORTUGUESE");
	float pi, pf;
	printf("qual o custo de fabrica��o do carro: ");
	scanf("%f", &pi);
	if(pi<=15000)
	{
		pf=(pi*0.05)+pi;
		printf("o pre�o final vai ser %f", pf);
	}
	else if(pi<=25000 && pi> 15000)
	{
		pf=(pi*0.10)+(pi*0.15)+pi;
		printf("o pre�o finaal vai ser %f", pf);
	}
	else(pi>25000);
		{
			pf=(pi*1.15)+(pi*1.20);
			printf("o pre�o fineal vai ser %f", pf);
		}
	
	system("pause");
}
