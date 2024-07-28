#include <stdio.h>
#include <stdlib.h>
main()
{
	int i;
	float salario=1000, snovo, percentual=1.5/100, anoatual;
	printf("Qual e o ano atual? "); scanf("%f", &anoatual);
	snovo=salario+percentual*salario;;
	for(i=2005;i<=anoatual;i++)
	{
	percentual=2*percentual;
	snovo=snovo+percentual*snovo;
	i++;
	}
	printf("\nNovo salario = %f\n", snovo);
	system("pause");
}

