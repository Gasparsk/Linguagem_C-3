#include <stdio.h>
#include <stdlib.h>

void par_impar(int n1)
{

    if (n1 % 2 != 0)
    {
        printf("O numero digitador e Impar.");
    }
    else if (n1 % 2 == 0)
    {
        printf("O numero digitador e Par.");
        
    }
}

void limpatela()
{
    fflush(stdin);
    system("cls");
}

int main()
{

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    limpatela();

    par_impar(numero);

    return 0;
}