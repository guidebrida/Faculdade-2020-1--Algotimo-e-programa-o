#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	int i, anoatual;
	float perc=1.5/100, salario=1000, novosalario;
	novosalario=salario*(1+perc);
	printf("que ano estamos: ");
	scanf("%d", &anoatual);
	for(i=2005;i<=anoatual;i++);
	{
		perc=perc*2;
		novosalario=novosalario*(1*perc);
	}
	printf("O seu novo salario e de: %f\n", novosalario);
	system("pause");
}

