#include<stdio.h>
#include<stdlib.h>
main()
{
	int nota1, nota2, nota3, nota4, media;
	printf("insira sua primeira nota ");
	scanf("%d", &nota1);
	printf("insira a segunda nota ");
	scanf("%d", &nota2);
	printf("insira a terceira nota ");
	scanf("%d", &nota3);
	printf("insira a quarta nota ");
	scanf("%d", &nota4);
	media=(nota1+nota2+nota3+nota4)/4;
	if(media>=6)
	{
		printf("voce foi aprovado!!!\n");
	}
	else
	{
		printf("voce foi reprovado\n");
		
	}
	printf("sua media final e:%d\n",media);
	system("pause");
}
