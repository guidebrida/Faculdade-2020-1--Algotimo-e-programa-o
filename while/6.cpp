#include<stdio.h> 
#include<stdlib.h>
main()
{
	int num, media, cont=0, masc=0, fem=0;
	char sexo;
	printf("QUal seu sexo?\nM para masculino F para feminino \n");
	fflush(stdin);
	scanf("%c", &sexo);
	printf("Qual sua idade? \n");
	scanf("%d", &num);
	while(num!=0)
	{
		cont++;
		media=media+num;
		printf("QUal seu sexo?\nM para masculino F para feminino\n");
		fflush(stdin);
		scanf("%c", &sexo);
		printf("Qual sua idade? \n");
		scanf("%d", &num);
		switch(sexo)
		{
			case 'M': masc++; break;
			case 'F': fem++; break;
		}
	
	}
	printf("\nA media de idade das pessoas e de %d", media/cont);
	printf("\nA Quantidade de pessoas do sexo masculino e de %d", masc);
	printf("\nA Quantidade de pessoas do sexo feminino e de %d\n", fem);
	system("pause");
}

