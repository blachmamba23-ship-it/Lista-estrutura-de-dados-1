//Ler as coordenadas de dois pontos no plano, (X1, Y1) e (X2, Y2). Calcular e
//imprimir a distância euclidiana entre eles 

#include <stdio.h>

int main() {
    double x1, y1, x2, y2, distance;
    
    printf("Digite as coordenadas do primeiro ponto (X1 Y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Digite as coordenadas do segundo ponto (X2 Y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    printf("A distância euclidiana entre os pontos é: %.2lf\n", distance);
    
    return 0;
}