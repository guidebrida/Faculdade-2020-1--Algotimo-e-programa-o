#include<stdio.h>
#include<stdlib.h>
main()

{
	int a[5], i, j, aux;
	for(i=0;i<5;i++)
	{
		printf("Vetor %d: ", i);
		scanf("%d", &a[i]);
	}
	printf("\nVetor\n ");
	for(i=0;i<5;i++)
	{
		printf("%d\n", a[i]);
	}
	for(i=4;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				aux=a[j];
				a[j]=a[j+1];
				a[j+1]=aux;
			}
		}
	}
	printf("\nVetor ordenado\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n", a[i]);
	}	
	system("pause");
}
