// Imprimir a tabuada do número 4.

#include <stdio.h>

int main() {
    int number = 4;
    
    printf("Tabuada do número %d:\n", number);
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    return 0;
}
