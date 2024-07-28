#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i; 
	float num, media;
	for(i=1;i<=4;i++)
	{
		printf("insira um numero: "); 
		scanf("%f", &num);
		media=media+num;
	}
	printf("sua media e: %2.f\n", media/4);
	system("pause");
}
