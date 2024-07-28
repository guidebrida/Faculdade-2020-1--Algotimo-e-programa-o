#include<stdio.h>
#include<stdlib.h>
main()
{
	int num;
	while(num!=-999)
	{
		num=0;
		printf("Insira um numero ");
		scanf("%d", &num);
		printf("O triplo do seu numero e  %d\n", num*3);
	}
	system("pause");
}
