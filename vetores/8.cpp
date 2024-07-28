#include<stdio.h>
#include<stdlib.h>

main()
{	int a[5], b[5], c[10], i, j=0;
	
	for(i=0;i<5;i++)
	{
		printf("insira um numero\n");
		scanf("%d", &a[i]);
		c[j]=a[i];
		j++;
		}
		
	for(i=0;i<5;i++)
	{
		printf("insira um numero\n");
		scanf("%d", &b[i]);
		c[j]=b[i];
		j++;
		}
	printf("\nVetor A\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\nVetor B\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t", b[i]);
	}
	printf("\nVetor C\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t", c[i]);
	}
	system("Pause");
}
		
				
			
