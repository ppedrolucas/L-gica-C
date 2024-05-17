#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 110;
    // DO WHILE: Ele executa o bloco de comandos pelo menos uma vez e só testa a condição no final
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);
}