#include<stdio.h>
#include<stdlib.h>
main()
{
	char nome[50], cidade[50], uf[50], grau_de_escolaridade[50], curso_que_leciona[50], endereco[60];
	int CEP, telefone, CPF, RG, data_de_nascimento;
	printf("insira seu nome");
	gets(nome);
	printf("diga a sua cidade");
	gets(cidade);
	printf("diga a sua unidade federativa");
	gets(uf);
	printf("diga sua escolaridade");
	gets(grau_de_escolaridade);
	printf("diga o curso que voce leciona");
	gets(curso_que_leciona);
	printf("qual e seu endereco");
	gets(endereco);
	printf("qual e o seu cep");
	fflush(stdin);
	scanf("%d", &CEP);
	printf("insira seu telefone");
	scanf("%d", &telefone);
	printf("insira seu cpf");
	scanf("%d", &CPF);
	printf("insira seu RG");
	scanf("%d", &RG);
	printf("insira sua data de nascimento");
	scanf("%d", &data_de_nascimento);
	printf("seu nome e:%s\n sua cidade e:%s\n sua unidade federativa e:%s\n sua escolaridade e:%s\n o curso que voce leciona e:%s\n o seu endereco e:%s\n seu cep e:%d\n seu telefone e:%d\n seu cpf e:%d\n seu rg e:%d\n sua data de nascimento e:%d\n", nome, cidade, uf, grau_de_escolaridade, curso_que_leciona, endereco, CEP, telefone, CPF, RG, data_de_nascimento);
	system("pause");
	
}
