#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Olá mundo.\n");
    /*Sequência de Escape do printf():
        \a Toca um bipe
        \b BackSpace
        \n Quebra de Linha
        \t TAB
        \r Retorna ao Início da linha
        \0 Caractere nulo
        \\ Imprimir literalmente uma \ na tela
        \' Imprimir '
        \" Imprimir "
        \? Imprimir ?
        \123 Imprimir caractere da tabela ASCII em octal */
    printf("Valor Inteiro: %d.\n", 14);
    printf("Valor decimal: %f.\n", 3.14);
    printf("Valor decimal com apenas 2 casas: %.2f\n", 4.1212455);
    printf("Único caractere: %c.\n", 'P');
    printf("Sequência de caractere: %s.\n", "Pedro");
    system("pause");
}
