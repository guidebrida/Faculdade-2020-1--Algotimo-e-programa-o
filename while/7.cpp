#include<stdio.h>
#include<stdlib.h>

main()
{
	int idade, contcas=0, cont_solt=0, contv=0;
	float cont_desq=0, somai=0, total=0;
	char status;
	printf("Idade: ");
	scanf("%d", &idade);
	while(idade>=0)
	{
		printf("Informe seu estado civil: \nC: casado, \nS: solteiro \nV: viuvo \nD: desquitado ou separado\n");
		fflush(stdin);
		scanf("%c", &status);
		total++;
		switch(status)
		{
			case 'C': contcas++; break;
			case 'S': cont_solt++; break;
			case 'V': somai=somai+idade; 
				  		contv++; break;
			case 'D': cont_desq++;break;
		}
		printf("Idade:");
		scanf("%d", &idade);
	}
	printf("A quantidadede pessoas casadas: %d\n", contcas);
	printf("A quantidade de pessoas solteiras: %d\n", cont_solt);
	printf("A media das idades das pessoas viuvas: %f\n", somai/contv);
	printf("A porcentagem de pessoas desquitadas ou separadas, dentre todas as pessoas analisadas: %f\n", cont_desq/total*100);
	system("pause");
}

