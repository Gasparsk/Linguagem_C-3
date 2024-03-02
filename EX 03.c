#include <stdio.h>
#include <stdlib.h>

/*int numero(int n1, int n2)
{

    int soma;
    soma = n1 + n2;
    soma = soma / 2;
    int resultado;
} */

float numero(float n1, float n2)
{
    float soma;
    soma = n1 + n2;
    soma = soma / 2;
}
void limpatela()
{

    fflush(stdin);
    system("cls");
}

int main()
{

    float media;
    int primeiroNumero;
    int segundoNumero;

    printf("Digite o Primeiro numero: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o Segundo numero: ");
    scanf("%d", &segundoNumero);

    limpatela();

    media = numero(primeiroNumero, segundoNumero);

    printf("Media: %.2f", media);
}
