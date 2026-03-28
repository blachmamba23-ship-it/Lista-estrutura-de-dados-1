//Ler um número e imprimir 5 sucessores deste número.  

#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    printf("Os 5 sucessores do número são:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", num + i);
    }
    
    return 0;
}