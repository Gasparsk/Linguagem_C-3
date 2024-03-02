#include <stdio.h>
#include <stdlib.h>

void par_impar(int numero[])
{
    int i;
    int contadorPar = 0, contadorImpar = 0;

    for (i = 0; i < 6; i++)
    {

        if (numero[i] % 2 != 0)
        {
            contadorImpar++;
        }
        else if (numero[i] % 2 == 0)
        {
            contadorPar++;
        }
    }
    printf("Quantidade Par: %d \n", contadorPar);
    printf("Quantidade imPar: %d \n", contadorImpar);
}

int main()
{
    int i;
    int numero[6];

    for (i = 0; i < 6; i++)
    {
        printf("Digite %d numero: ", i + 1);
        scanf("%d", &numero[i]);
    }

    par_impar(numero);
    return 0;
}
