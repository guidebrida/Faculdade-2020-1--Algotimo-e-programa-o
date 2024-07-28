#include<stdio.h>
#include<stdlib.h>
main()
{
	char letra;
	while(letra!='f')
	{
		printf("Insira uma letra ");
		fflush(stdin);
		scanf("%c", &letra);
		printf("A sua letra e %c\n", letra);
	}
	system("pause");
}
