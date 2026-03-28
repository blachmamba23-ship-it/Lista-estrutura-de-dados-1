//Seja N um número quadrado perfeito. Se somarmos os números ímpares
//consecutivos (1+3+5+7+9+...) até que esta soma seja igual a N, o número M de
//termos somados será igual a raiz quadrada de N. Exemplo: N = 16 16 = 1 + 3 + 5
//+ 7 M = 4 termos. Logo, a raiz quadrada de 16 é 4. Devem ser solicitados vários
//números. O programa deve ser finalizado quando for informado N zero.

#include <stdio.h>

int main() {
    int N, sum, M;
    
    do {
        printf("Digite um número quadrado perfeito (ou 0 para encerrar): ");
        scanf("%d", &N);
        
        if (N > 0) {
            sum = 0;
            M = 0;
            for (int i = 1; sum < N; i += 2) {
                sum += i;
                M++;
            }
            
            if (sum == N) {
                printf("A raiz quadrada de %d é: %d\n", N, M);
            } else {
                printf("%d não é um número quadrado perfeito.\n", N);
            }
        }
        
    } while (N != 0);
    
    return 0;
}