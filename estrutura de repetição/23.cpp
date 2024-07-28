#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"PORTUGUESE");	
	int i, idade=0, opiniao, mdi=0, mediaidade=0, i3=0, i2=0, i1=0;
	for(i=1;i<=10;i++)
	{
	printf("qual a sua opinião sobre o filme Os Vingadores – O Ultimato\nExcelente insira: 3\nBom insira: 2\nRegular insira:1\n");
	scanf("%d", &opiniao);
	printf("insira sua idade: ");scanf("%d", &idade);
	if(opiniao==3)
	{
		mdi=idade+idade;
		i3++;
	}
	else if(opiniao==1)
	{
		i1++;
	}
	else(opiniao==2);
	{
		i2++;
	}
	}
	printf("a media das idades das pessoas que responderam excelente e: %d\n", mdi/i3);
	printf("A quantidade de pessoas que responderam regular e: %d\n", i1);
	printf("O percentual de pessoas que responderam bom entre todos os expectadores analisados e de %d\n", i2/10);
	system("pause");		
}

