#include<stdio.h>
#include<stdlib.h>
main()
{
	int n1, v1, n2, v2, media;
	printf("informe o primeira nota");
	scanf("%d", &n1);
	printf("informe o peso da primeira nota");
	scanf("%d", &v1);
	printf("informe a segunda nota ");
	scanf("%d", &n2);
	printf("informe o peso da segunda nota");
	scanf("%d", &v2);
	media=(n1*v1+n2*v2)/(v1+v2);
	printf("o resultado e: %d", media);
	system("pause");
}
