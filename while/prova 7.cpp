#include<stdio.h>
#include<stdlib.h>
main()
{
	float joao, paulo;
	int cont=0;
	joao=112;
	paulo=145;
	while(paulo>joao)
	{
		cont++;
		paulo=paulo+2;
		joao=joao+3;
		printf("a altura de paulo e de %f\n", paulo);
		printf("a altura de joao e de %f\n", joao);
	}
	printf("Foi necessario %d anos para joao ultrapasar paulo\n", cont);
	system("pause");
}
