#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
	
{
	setlocale(LC_ALL,"PORTUGUESE");
	float pi, pf;
	printf("qual o preço de fabrica do carro?");
	scanf("%f", pi);
	if(pi<=15000)
	{
		pf=pi*1.05;
	}
	else if(pi<=25000 && pi>15000)
	{
		pf=(pi*0.10)+(pi*0.15)+pi;
	}
	else(pi>25000);
	{
		pf=(pi*0.15)+(pi*0.20)+pi;
	}
	printf("\no preço final do carro vai ser: %f", pf);
system("pause");
}

