#include <stdio.h>
#include <stdlib.h>

void repetir(int n1)
{
    int i;
    for (i = 1; i <= 10; i++)
    {

        printf("%d x %d = %d \n", n1, i, n1 * i);
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

    repetir(numero);
}
