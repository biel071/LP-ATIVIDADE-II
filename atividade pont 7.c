#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
  int escolha;

    printf("Menu:\n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Configura��es\n");
    printf("Escolha uma op��o: ");
    
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Iniciando um novo jogo...\n");
           
            break;
        case 2:
            printf("Carregando um jogo...\n");
          
            break;
        case 3:
            printf("Acessando as configura��es...\n");
           
            break;
        default:
            printf("Op��o inv�lida. Escolha uma op��o v�lida (1, 2 ou 3).\n");
            break;
    }

    return 0;
}   