#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
    int aatual;
	float sal, per, nsalario;
	salario=1000;
	per=1.5/100;
	nsalario=sal*(1+per);
	printf("Qual e o ano atual\n");
	scanf("%d",&aatual);
	for(i=2007;i<=aatual;i++);
	{
		per=per*2;
		nsalario=nsalario*(1*per);
	}
	printf("o seu novo salario e: %f\n", nsalario);
    system("pause");
}

