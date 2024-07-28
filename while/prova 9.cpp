#include<stdio.h>
#include<stdlib.h>
main()
{
	int total=1;
	for(int i=2;i<20;i=i*2)
	{
		total=total*i;
		if(total>10)
		{
			break;
		}
	}
	printf("%d", total);
}

