#include <stdio.h>
#include <stdlib.h>

/*
    Se IF for verdade, o ELSE vai ser ignorado,
    Se IF for falso, o ELSE será executado.
*/

int main()
{
    float nota1, nota2, media;

    printf("Digite a nota do primeiro bimestre do Aluno:\n");
    scanf("%f", &nota1);
    printf("Digite a nota do segundo bimestre do Aluno:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media do aluno é: %.2f\n", media);

    if (media >= 7)
    {
        printf("Aprovado :(\n");
    }
    else
    {
        printf("Relapso do cabrunco.\n");
    }
    system("pause");
    system("cls");
}