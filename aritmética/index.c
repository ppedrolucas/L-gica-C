#include <stdio.h>

int main()
{
    /*Operações Matemáticas*/

    int A, B, soma, sub, mut, div, dado;

    printf("Digite um número:\n");
    scanf("%d", &A);
    printf("Digite o segundo número:\n");
    scanf("%d", &B);

    soma = A + B;
    sub = A - B;
    mut = A * B;
    div = A / B;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", sub);
    printf("Multiplicação: %d\n", mut);
    printf("Divisão: %d\n", div);

    // Operadores de atribuição aritmética

    printf("Digite mais um número\n");
    scanf("%d", &dado);

    dado++;
    printf("Incrementando mais 1: %d.\n", dado);

    dado--;
    printf("Decrementando menos 1: %d.\n", dado);

    dado += dado;
    printf("Somando o seu valor com sí próprio: %d.\n", dado);

    dado -= 2;
    printf("Diminuido o seu valor com 2: %d.\n", dado);

    dado *= 4;
    printf("Multiplicando o seu valor com 4: %d.\n", dado);

    dado /= dado;
    printf("Dividindo o seu valor com sí próprio: %d.\n", dado);
}
