#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
    printf("\n===========================\n");
    printf("\t SENAI");
    printf("\n===========================\n");
}

void limpatela()
{
    fflush(stdin);
    system("cls");
}

int main()
{

    char nome[200];
    int idade;

    cabecalho();

    printf("Digite um nome: ");
    gets(nome);

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    limpatela();

    cabecalho();

    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
}