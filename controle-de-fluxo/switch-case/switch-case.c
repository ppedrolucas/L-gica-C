#include <stdio.h>
#include <stdlib.h>

/*
    O Switch Case só trabalha com o operador de igualdade "=="
    Caso uma condição atenda a algum dos valores dos cases,
    o bloco de comandos respectivo será executado e todos os
    outros serão ignorados.
 */

int main()
{
    int dia = 0;
    printf("Insira um valor de 1 a 7:\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo.\n");
        break;
    case 2:
        printf("Segunda.\n");
        break;
    case 3:
        printf("Terça.\n");
        break;
    case 4:
        printf("Quarta.\n");
        break;
    case 5:
        printf("Quinta.\n");
        break;
    case 6:
        printf("Sexta.\n");
        break;
    case 7:
        printf("Sábado.\n");
        break;

    default:
        printf("Formato Inválido.\n");
        break;
    }
}