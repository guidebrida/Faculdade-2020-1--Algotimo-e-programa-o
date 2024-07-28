#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i;
	float somapar=0, somaimpar=0, final=0, par=0, impar=0; 
	for(i=86;i<906;i++)
	{
		final++;
		printf("%d\n", i);
		if(i%2==0)
		{
			somapar=somapar+i;
			par++;
		}
		else
		{
			somaimpar=somaimpar+i;
			impar++;
		}
		
	}
	printf("\nSoma dos pares e: %.2f\n", somapar);
	printf("\nSoma dos impares e: %.2f\n", somaimpar);
	printf("\nPercentual dos pares e: %.2f\n", par/final*100);
	printf("\nPercentual dos impares e: %.2f\n", impar/final*100);
	system("pause");
}
