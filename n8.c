//Ler dois números inteiros e imprimir o primeiro elevado ao segundo e depois o
//segundo elevado ao primeiro

#include <stdio.h>

int main() {
    int num1, num2;
    long long power1, power2;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    power1 = 1;
    for (int i = 0; i < num2; i++) {
        power1 *= num1;
    }
    
    power2 = 1;
    for (int i = 0; i < num1; i++) {
        power2 *= num2;
    }
    
    printf("%d elevado a %d é: %lld\n", num1, num2, power1);
    printf("%d elevado a %d é: %lld\n", num2, num1, power2);
    
    return 0;
}