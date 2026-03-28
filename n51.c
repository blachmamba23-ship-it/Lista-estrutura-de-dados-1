//Faça um programa que desenhe um retângulo usando o caracter ‘*’. Devem ser
//lidos dois parâmetros, linhas e colunas, sendo que o valor por omissão é o valor
//mínimo igual a 1 e o valor máximo é 20. Se valores fora da faixa forem
//informados, eles devem ser convertidos para os valores permitidos.

#include <stdio.h>

int main() {
    int rows, columns;

    printf("Digite o número de linhas (1 a 20): ");
    scanf("%d", &rows);
    if (rows < 1) {
        rows = 1;
    } else if (rows > 20) {
        rows = 20;
    }

    printf("Digite o número de colunas (1 a 20): ");
    scanf("%d", &columns);
    if (columns < 1) {
        columns = 1;
    } else if (columns > 20) {
        columns = 20;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}