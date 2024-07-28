#include<stdio.h>
#include<stdlib.h>
main()
{
	int i, id;
	float  peso, p18, p28, fimvelho=0, fimnovo=0;
	for(i=1;i<=12;i++)
	{
		printf("qual e a sua idade? ");
		scanf("%d", &id);
		printf("qua e seu peso ");
		scanf("%f", &peso);
		if(id<=18)
		{
		fimnovo=fimnovo+peso;
		p18++;
		}
		else(id>28);
		{
		fimvelho=fimvelho+peso;
		p28++;
		}
	}
		printf("a media de pesos da faixa etaria de menor que 18 anos e: %2.f\n", fimnovo/p18);
		printf("a media de pesos da faixa etaria de maior que 28 anos e: %2.f\n", fimvelho/p28);
			
	system("pause");
}
