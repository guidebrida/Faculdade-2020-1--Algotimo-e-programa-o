#include<stdio.h>
#include<stdlib.h>
main()
{
	int i, j, d;
	printf("insira a taboada que voce deseja: ");
	scanf("%d", &d);
	for(i=1;i<=10;i++)
	{
	
			printf("%d x %d = %d\n", d, i, i*d);
	
	}
	system("pause");
	return 0;
}
