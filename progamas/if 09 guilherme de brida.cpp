#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
	
{
	setlocale(LC_ALL,"PORTUGUESE");
	float n1,n2;
	int codigo;
	printf("insira o primeiro numero: ");
	scanf("%f",&n1);
	printf("insira o segundo numero: ");
	scanf("%f", &n2);
	printf("\nCodigo 1: O primeiro número elevado ao segundo ");
	printf("\nCodigo 2: Raiz quadrada de cada um dos números");
	printf("\nCodigo 3: Raiz cúbica de cada um dos números");
	printf("\nEscolha uma das opções acima");
	scanf("\n%f", &codigo);
	if(codigo==1)
	{
		printf("O primeiro numero elevado ao segundo e:%f\n", pow(n1,n2));
	}
	else if(codigo==2)
	{
		printf("a raiz quadrada do primeiro numero e:%f\n", sqrt(n1));
		printf ("a raiz quadrada do segundo numero e:%f\n",sqrt(n2));
	}
	else if(codigo==3)
	{
		printf("a raiz cúbica do primeiro numero e:%f\n", cbrt(n1));
		printf ("a raiz cubica do segundo numero e:%f\n", cbrt(n2));
	}
	
	else
	{
		printf("\nErro codigo inserido não e valido\n");
			
	}
	system("pause");
}

