#include<stdio.h> 
#include<stdlib.h>
main()
{
	int num, soma=0, con=0;
	while(num>=0)
	{
		printf("insira um numero ");
		scanf("%d", &num);
		printf("O numero informado e: %d\n", num);
		if(num>=0)
		{
		soma=soma+num;
		con++;	
		}	
	}
	printf("\n\n\nA media de numeros informados e de: %d\n", soma/con);
system("pause");

}
