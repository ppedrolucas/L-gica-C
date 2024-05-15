#include <stdio.h>

#define titulo "Entrada e saída de dados." // constante

int main()
{
    /*  declaração de variável: <tipo> <nome>;
        atribuição de valor: <variável> = <valor>;
        constante: #define <nome> <valor>
    */
    char nome[10] = ""; // preciso informar a quantidade de caracteres que serão guardados.
    int idade = 0;

    printf("%s\n", titulo);

    printf("Digite seu nome:\n");
    scanf("%s", nome); // com texto não precisa colocar &.

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("O nome informado é: %s e a idade informada é %d", nome, idade);
}
