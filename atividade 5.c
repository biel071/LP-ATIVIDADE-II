#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
      int escolha;

    printf("Escolha um idioma de prefer�ncia:\n");
    printf("1 - Ingl�s\n");
    printf("2 - Espanhol\n");
    printf("3 - Franc�s\n");
    
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Welcome!\n");
    } else if (escolha == 2) {
        printf("Bienvenido\n");
    } else if (escolha == 3) {
        printf("Bienvenue!\n");
    } else {
        printf("Escolha inv�lida. Por favor, escolha 1, 2 ou 3.\n");
    }

    return 0;
}