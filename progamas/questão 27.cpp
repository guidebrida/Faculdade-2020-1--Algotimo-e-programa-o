#include<stdio.h>
#include<stdlib.h>
main()
{
	float n1, n2, n3, media;
	printf("informe a primeira nota ");
	scanf("%f", &n1);
	printf("informe a segunda nota ");
	scanf("%f", &n2);
	printf("informe a terceira nota ");
	scanf("%f", &n3);
	media=(n1+n2+n3)/3;
	printf("a sua media e: %f\n", media);
	system("pause"); 
}
