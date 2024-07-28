#include<stdio.h>
#include<stdlib.h>
main()
{
	int n1, n2, n3;
	printf("insira o primeiro numero: ");
	scanf("%d",&n1);
	printf("insira o segundo numero: ");
	scanf("%d",&n2);
	printf("insira o terceiro numero: ");
	scanf("%d", &n3);
		if(n1<n2 && n1<n3)
		{
			printf("%d", n1);	
		}
				else if(n2<n1 && n2<n3)
				{
					printf("%d", n2);
					
				}
					else
					{
						printf("%d", n3);
					}
	system("pause");
}
