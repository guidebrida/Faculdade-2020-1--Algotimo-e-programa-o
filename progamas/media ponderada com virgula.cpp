#include<stdio.h>
#include<stdlib.h>
main()
{
	float n1, v1, n2, v2, media;
	printf("informe o primeira nota");
	scanf("%f", &n1);
	printf("informe o peso da primeira nota");
	scanf("%f", &v1);
	printf("informe a segunda nota ");
	scanf("%f", &n2);
	printf("informe o peso da segunda nota");
	scanf("%f", &v2);
	media=(n1*v1+n2*v2)/(v1+v2);
	printf("o resultado e: %f", media);
	system("pause");
}
