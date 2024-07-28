#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
	
{
	setlocale(LC_ALL,"PORTUGUESE");
	float sal, aumento, novo;
	printf("insira o salario do colaborador:\n");
	scanf("%f", &sal);
	if(sal<3000)
	{
		aumento=sal*0.15;
		novo=sal+aumento;
	}
	else if(sal<6000 && sal >=3000)
	{
		aumento=sal*0.10;
		novo=sal+aumento;
	}
	else if(sal<9000 && sal>=6000)
	{
		aumento=sal*0.05;
		novo=sal+aumento;
	}
	else(sal>=9000);
	{
		aumento=sal*0.05;
		novo=sal+aumento;
	}
	printf("\no novo salario sera %f", novo);
	system("pause");
}
