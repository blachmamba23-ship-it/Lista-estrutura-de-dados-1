//Imprimir uma escala de temperaturas Celsius e em seguida a mesma escala de
//temperaturas em Farenheit, partindo de zero grau Celsius até cinqüenta graus
//Celsius, de dez em dez graus.

#include <stdio.h>

int main() {
    printf("Celsius\tFahrenheit\n");
    for (int celsius = 0; celsius <= 50; celsius += 10) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%d\t%.2lf\n", celsius, fahrenheit);
    }
    return 0;
}