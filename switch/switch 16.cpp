#include<stdio.h>
#include<stdlib.h>
main()
{
	int opcao;
	printf("informe o codigo de origem do produto: ");
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 1: printf("sul\n"); break;
		case 2: printf("norte\n"); break;
		case 3: printf("leste\n"); break;
		case 4: printf("oeste\n"); break;
		case 5 ... 6: printf("nordeste\n"); break;
		case 7 ... 9: printf("sudeste\n"); break;
		case 10 ... 20: printf("centro-oeste\n"); break;
		case 21 ... 30: printf("noroeste\n"); break;
		default: printf("invalida\n");
		
	}
	system("pause");
}
