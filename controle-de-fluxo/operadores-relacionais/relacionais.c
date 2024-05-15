#include <stdio.h>
#include <stdlib.h>

// Operadores Lógicos:

/*  Conjunção: "e, É verdade quando tudo for verdadeiro" lógico = "&&".
    Disjunção: "ou, É verdade quando
     se ao menos uma coisa for verdadeira" lógico = "||".
    Negação ou Inverção: "Não, É verdade quando
     o operando é falso (Inverte o valor Lógico)" = "!".*/

int main()
{
    float nota;

    printf("Insira sua nota:\n");
    scanf("%f", &nota);

    // Se a nota estiver entre 4 e 7 tem direito a substitutiva
    if (nota >= 4 && nota <= 7)
    {
        printf("Tem direito a fazer uma Substitutiva :)\n");
    }
    system("pause");
    system("cls");
}