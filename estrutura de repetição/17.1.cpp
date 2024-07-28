#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i, quant, num, maior ,menor;
	float soma=0, impar;
	printf("Quantos numeros vao ser lidos: ");
	scanf("%d", &quant);
	for(i=1; i<=quant; i++);
	{
		printf("informe o numero %d", i);
		scanf("%d", &num);
		soma=soma=num;
		if(i==1)
		{
			maior=num;
			menor=num;
		}
		if(num>maior)
			maior=num;
		if(num<menor)
			menor=num;
		if(num%2==1)
		{
			impar++;
				}		
	}
	printf("\n\n\nA Soma dos numeros e: %.2f", soma);
	printf("\nA quantidade de numeros e: %d", quant);
	printf("\nA media dos numeros e: %.2\n", soma/quant);
	printf("\nO maior numero e: %d", maior);
	printf("\nO menor numero e: %d", menor);
	printf("Percentual de numeros impares e: %d", ((impar/quant)*100));
	system("pause");
}

