#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
	
{
	setlocale(LC_ALL,"PORTUGUESE");
	float n1,n2;
	int codigo;
	printf("\ninsira o primeiro numero: ");
	scanf("%f", &n1);
	printf("\ninsira o segundo numero: ");
	scanf("%f", &n2);
	printf("\n Codigo 1: O primeiro número elevado ao segundo ");
	printf("\n Codigo 2: Raiz quadrada de cada um dos números ");
	printf("\n Codigo 3: Raiz cúbica de cada um dos números ");
	printf("\n Escolha uma das 3 opções acima ");
	scanf("%d", &codigo);
	if(codigo==1)
	{
		printf("\n O primeiro numero elevado ao segundo e: %f", pow(n1,n2));
	}
	else if(codigo==2)
		{
			printf("\n a raiz quadrada do primeiro numero e: %f", sqrt(n1));
			printf("\n a raiz quadrada do segundo numero e: %f", sqrt(n2));
		}
	else if(codigo==3)
	{
		printf("\n a raiz cúbica do primeiro numero e: %f", cbrt(n1));
		printf("\n a raiz cúbica do segundo numero e: %f",cbrt(n2));
		}	
		else
		{
			printf("\n o codigo inserido acima não e valido.");
		}
		system("pause");
}
