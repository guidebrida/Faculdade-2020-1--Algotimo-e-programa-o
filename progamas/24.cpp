	#include<stdio.h>
	#include<stdlib.h>
	main()
{
	float numero, quadrado, cubo, raiz_quadrada, raiz_cubica;
	printf("informe o numero");
	scanf("%f",&numero);
	quadrado=numero*numero;
	cubo=numero*numero*numero;
	raiz_quadrada=numero/2;
	raiz_cubica=numero/3;
	printf("o quadrado do numero e:%f\no cubo do numero e:%f\na raiz quadrada do numero e:%f\na raiz cubica do numero e:%f\n", quadrado, cubo, raiz_quadrada, raiz_cubica);
	system("pause");
}
