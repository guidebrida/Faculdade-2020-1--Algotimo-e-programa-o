#include<stdio.h>
#include<stdlib.h>
main()
{
    int nro,soma=0,maior=0,menor=0;
    printf("digite os valores:");
    scanf("%d",&nro);
    maior=nro;
    menor=nro;
    while(nro!=0){


        if(nro>0)
        soma=soma+nro;
        if(nro>maior)maior=nro;
        if(nro<menor)menor=nro;

        else if(nro<0)

        printf("erro\n");
        printf("digite os valores:");
        scanf("%d",&nro);


        }
   printf("O maior Nro digitado é:%d\n",maior);
   printf("O menor Nro digitado é:%d\n",menor);
   printf("A soma dos Nros:%d\n",soma);
   system("pause");
   }
