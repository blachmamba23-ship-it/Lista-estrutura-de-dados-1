//Ler um número e imprimir seu quadrado

#include <stdio.h>
#include <math.h>

int main() {
    int num, square;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    square = num * num;
    
    printf("O quadrado do número é: %d\n", square);
    
    return 0;
}
