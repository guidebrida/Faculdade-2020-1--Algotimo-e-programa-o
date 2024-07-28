#include<stdio.h>
#include<stdlib.h>
main()
{
	int contador=0;
	float investimento, total=0;
	printf("div");
	scanf("%f", &investimento);
	
	total=total+investimento;
	
	while(total<5000)
	{
		total=total*1.5;
		contador++;
	}
	printf("%d", contador);
	system("pause");	
}
