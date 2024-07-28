#include<stdio.h>
#include<stdlib.h>
main()
{
	float n1, v1, n2, v2, n3, v3, media;
	printf("informe o primeira nota");
	scanf("%f", &n1);
	printf("informe o peso da primeira nota");
	scanf("%f", &v1);
	printf("informe a segunda nota ");
	scanf("%f", &n2);
	printf("informe o peso da segunda nota");
	scanf("%f", &v2);
	printf("informe a terceira nota ");
	scanf("%f", &n3);
	printf("informe o peso da terceira nota");
	scanf("%f", &v3);
	media=(n1*v1+n2*v2+n3*v3)/(v1+v2+v3);
	printf("o resultado e: %f", media);
	system("pause");
}
