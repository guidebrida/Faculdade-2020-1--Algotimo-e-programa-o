#include<stdio.h>
#include<stdlib.h>
main()
{
	int x;
	for(x=50;x<60;x--)
	{
		if(x%2==0)
		printf("\n X; %d", x);
		x=x+3;
	}
	system("pause");
}
