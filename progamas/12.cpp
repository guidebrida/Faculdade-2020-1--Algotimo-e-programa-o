#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
	
{
	setlocale(LC_ALL,"PORTUGUESE");
	float sa;
	printf("\ninsira seu saldo médio do ultimo ano: ");
	scanf("%f", sa);
	if(sa>4000)
	{
		printf("você tem direito a 30 porcento do seu saldo medio que assim você ficara com %f", sa*1.30);
	}
	else if(sa<=4000 && sa>3000)
	{
		printf("você tem direito a 25 porcento do seu saldo medio que e %f\n.Assim você ficara com %f", sa, sa*0,25);
	}
	else if(sa<=3000 && sa>2000)
	{
		printf("você tem direito a 20 porcento do seu saldo medio que e %f\n.Assim você ficara com %f",  sa*0,20);
	}
	else(sa<2000);
	{
		printf("você tem direito a 10 porcento do seu saldo medio que e %f\n.Assim você ficara com %f", sa, sa*0,10);

	}
		system("pause");
}
