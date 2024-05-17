#include <stdio.h>
#include <stdlib.h>

// É muito importante inicializar a variável contadora.

// WHILE: Enquanto a condição for verdadeira o laço de repetição repetirá o bloco de comandos.

int main()
{
    int i = 0;      // Inicializa a variável contadora
    while (i <= 10) // Testa a condição no início
    {
        printf("%d ", i + 1); // Executa o comando
        i++;                  // Atualiza a variável contadora/controladora
    }
}