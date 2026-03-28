//Ler uma temperatura em Farenheit e imprimir o correspondente em Celsius

#include <stdio.h>

int main() {
    double fahrenheit, celsius;
    
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    
    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    
    printf("A temperatura em Celsius é: %.2lf\n", celsius);
    
    return 0;
}