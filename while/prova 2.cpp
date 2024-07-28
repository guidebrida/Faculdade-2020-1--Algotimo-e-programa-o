#include<stdio.h>
#include<stdlib.h>
main()
{
	int i=1;
	float tempo=30;
	do{
		tempo=tempo-i*2;
		i++;
		}
	while(i<5);
	{
		printf("%f", tempo);
	}
	system("pause");
}
