#include<stdio.h>
#include<stdlib.h>
main()
{
	float minimo, vhora, mes, vd, vextras, tbruto, liq, recebido, grat, irenda;
	int nhoras, dep, hextras;
	printf("Informe a quantidade de horas trabalhadas: ");
	scanf("%d", &nhoras);
	while(nhoras!=-1)
	{
		printf("Informe o valor do salario minimo ");
		scanf("%f", &minimo);
		printf("Informe o numero de pessoas dependentes: ");
		scanf("%d", &dep);
		printf("informe quantas horas extras: ");
		scanf("%d", &hextras);
		vhora=minimo/10;
		mes=vhora*nhoras;
		vd=32*dep;
		vextras=vhora*1.5*hextras;
		tbruto=mes+vd+vextras;
		
		if(tbruto<=900)
		irenda=0;
		else if(tbruto<=1500)
		irenda=tbruto=0.01;
		else
			irenda=tbruto*0.02;
			
		liq=tbruto-irenda;
		
		if(liq<=900)
		grat=100;
		else
		grat=50;
		recebido=liq+grat;
		printf("salario final e de: %f\n", recebido);	
		printf("Informe a quantidade de horas trabalhadas: ");
		scanf("%d", &nhoras);
	}
	system("pause");
}
