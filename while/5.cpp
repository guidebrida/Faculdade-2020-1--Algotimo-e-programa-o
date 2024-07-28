#include<stdio.h> 
#include<stdlib.h>
main()
{
	int menor=0, maior=0, media, num, contador=0;
	printf("QUANDO FOR DIGITADO O NUMERO O PROGRAMA ENCERRA\n");
	printf("Informe  um numero: ");
	scanf("%d", &num);
	maior=num;
	menor=num;
	while(num!=0)
	{
		contador++;
		media=media+num;
		if(num>maior)
			maior=num;
		if(num<menor)
			menor=num;	
		printf("Informe  um numero: ");
		scanf("%d", &num);
	}
	printf("O maior numero e: %d\n", maior);
	printf("O menor numero e: %d\n", menor);
	printf("A media aritmetica dos numeros e: %d", media/contador);
}
