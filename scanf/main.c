#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*SCANF(<especificador de form.>, &<v1>,..., &<vN>);*/
    int idade = 0;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Sua idade é: %d\n", idade);
}