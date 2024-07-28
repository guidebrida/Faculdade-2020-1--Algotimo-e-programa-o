#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i, n1=0, n2=1 , n3;
	printf("sequencia de finobaci\n\n\n");
	for(i=1;i<=10;i++)
	{
		n3=n2+n1;
		n1=n2;
		n2=n3;
		
		printf("Soma e: %d\n", n3);
	}
	system("pause");
}
