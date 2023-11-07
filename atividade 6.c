#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
      int codigo;
    float preco;

    printf("Escolha o c�digo do produto:\n");
    printf("1 - Camiseta\n");
    printf("2 - Cal�a\n");
    printf("3 - Sapato\n");
    printf("Digite o c�digo do produto: ");
    
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Produto selecionado: Camiseta\n");
            preco = 57;
            break;
        case 2:
            printf("Produto selecionado: Cal�a\n");
            preco = 125;
            break;
        case 3:
            printf("Produto selecionado: Sapato\n");
            preco = 362;
            break;
        default:
            printf("C�digo de produto inv�lido.");
            return 1; 
    }

    printf("Pre�o: R$%.2f\n", preco);

    return 0;
}