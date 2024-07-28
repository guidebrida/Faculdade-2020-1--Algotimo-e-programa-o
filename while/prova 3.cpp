#include<stdio.h>
#include<stdlib.h>
main()
{
	int sexo,i;
	float altura, menor=999999,maior=-9999999999, mediafem, mediaaltura, fem=0;
	for(i=1;i<=5;i++)
	{
	printf("Qual e seu sexo?\n0-masculino\n1feminino\n");
	scanf("%d", &sexo);
	
	switch(sexo)
	{
	case 0: printf("Qual e sua altura? ");
			scanf("%f", &altura); break;
	
	case 1:	printf("Qual e sua altura? ");
			scanf("%f", &altura);
			fem++;
			mediafem=mediafem=altura; break;
			default: printf("incorreto\n");
	}
	mediaaltura=mediaaltura+altura;
	if(altura>maior)
			maior=altura;
	if(altura<menor)
		menor=altura;
	}
	printf("\nAmaior altura e: %f\n", maior);
	printf("\nA menor altura e: %f\n", menor);
	printf("\nA media de altura e de: %f\n", mediaaltura/5);
	printf("\nA media de altura feminina e de %f\n", mediafem);
	system("pause");
}
