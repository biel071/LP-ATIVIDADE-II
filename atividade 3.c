#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
   float nota;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9) {
        printf("Classifica��o: Excelente\n");
    } else if (nota >= 7 && nota < 9) {
        printf("Classifica��o: Bom\n");
    } else if (nota >= 5 && nota < 7) {
        printf("Classifica��o: Razo�vel\n");
    } else {
        printf("Classifica��o: Insuficiente\n");
    }

    return 0;
}