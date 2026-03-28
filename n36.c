//Sabendo-se que são necessários dezoito watts de iluminação por metro
//quadrado, ler a potência de lâmpada a ser utilizada (em watts) as dimensões de
//um cômodo de residência (largura e comprimento em metros). Calcular e
//imprimir o número de lâmpadas necessárias para iluminar tal cômodo.

#include <stdio.h>

int main() {
    double lampPower, width, length, area, requiredPower;
    
    printf("Digite a potência da lâmpada (em watts): ");
    scanf("%lf", &lampPower);
    
    printf("Digite a largura do cômodo (em metros): ");
    scanf("%lf", &width);
    
    printf("Digite o comprimento do cômodo (em metros): ");
    scanf("%lf", &length);
    
    area = width * length;
    requiredPower = area * 18.0; // 18 watts por metro quadrado
    
    int numberOfLamps = (int)(requiredPower / lampPower);
    
    if (requiredPower > numberOfLamps * lampPower) {
        numberOfLamps++; // Se houver sobra de potência, adicionar mais uma lâmpada
    }
    
    printf("Número de lâmpadas necessárias para iluminar o cômodo: %d\n", numberOfLamps);
    
    return 0;
}