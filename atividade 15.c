#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");


 int escolha;
float valor, resultado;

    while (1) {
        printf("Escolha uma op��o de convers�o:\n");
        printf("1. Quil�metros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("0. Sair do programa\n");
        printf("Op��o: ");
        scanf("%d", &escolha);

        if (escolha == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        switch (escolha) {
            case 1:
                printf("Digite a dist�ncia em quil�metros: ");
                scanf("%f", &valor);
                resultado = valor * 0.6; 
                printf("%.f quil�metros equivalem a %.0f milhas.\n", valor, resultado);
                break;
            case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%f", &valor);
                resultado = (valor * 9.0/5.0) + 32; // Convers�o de Celsius para Fahrenheit
                printf("%.f graus Celsius equivalem a %.f graus Fahrenheit.\n", valor, resultado);
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    }

    return 0;
}
