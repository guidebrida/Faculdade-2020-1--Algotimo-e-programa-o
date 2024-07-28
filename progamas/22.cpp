#include<stdio.h>
#include<stdlib.h>
main()
{
	int n1, n2, n3;
	printf("insira o numero");
	scanf("%d", &n1);
	n2=n1-1;
	n3=n1+1;
	printf("o numero anterior e:%d\n", n2);
	printf("o numero superior e:%d\n", n3);
	system("pause");
}
