#include<stdio.h>
#include<stdlib.h>
main()
{
	float n1, n2;
	printf("insira um numero");
	scanf("%f", &n1);
	if(n1>20)
	{
		n2=n1/2;
		printf("seu numero pela metade e: %f\n", n2);
	}		
	printf("seu numero e: %f\n", n1);
	system("pause");
}


