#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i, soma;
	for(i=100;i<=105;i++)
	{
		printf("o numero e: %d\n", i);
		soma=soma+i;
	}
	printf("a soma do numero e: %d\n", soma);
	system("pause");
}
