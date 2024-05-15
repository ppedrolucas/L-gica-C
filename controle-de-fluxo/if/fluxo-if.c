#include <stdio.h>
#include <stdlib.h>

// IF: Se a condição for verdadeira, o bloco de comandos relacionado ao IF será executado, caso contrário ele o irá ignorá-lo.

// Operadores relacionas, >,>=,<,<=,==,!=
// Igual: ==
// Diferente: !=

int main()
{
    float nota;

    printf("Insira sua nota:\n");
    scanf("%f", &nota);

    // IF não usa ";"
    if (nota >= 7)
    {
        printf("Aprovado :)\n");
    }

    printf("IF ignorado.\n");
    system("cls");
}