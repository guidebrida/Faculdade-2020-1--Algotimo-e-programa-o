#include<stdio.h>
#include<stdlib.h>

main()
{
	int a[6], i, par=0, impar=0;
	for(i=0;i<6;i++)
	{
		printf("Vetor [%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("\nNumeros Pares\n");
	for(i=0;i<6;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\t", a[i]);
			par++;
		}
	}
	printf("\nTotal de numeros pares: %d\n", par);
	printf("\nNumeros Impares\n");
	for(i=0;i<6;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d\t", a[i]);
			impar++;
		}
	}
	printf("\nTotal de numeros impares: %d\n", impar);
	system("pause");
}
