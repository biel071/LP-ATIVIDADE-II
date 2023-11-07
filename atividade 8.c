#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
           int numero;
           int i;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("N�mero n�o � positivo. Encerrando o programa.\n");
    }

    printf("Contagem regressiva a partir de %d:\n", numero);

    for ( i = numero; i >= 0; i--) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}