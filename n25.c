//Construa um programa que calcule a área total de uma residência (sala,
//cozinha, quartos, etc., sendo todos eles retangulares). O usuário deverá entrar
//com a largura (L) e o comprimento (C) de cada cômodo da casa. Em seguida
//deverá ser apresentada uma pergunta, solicitando a confirmação do usuário
//para continuar com a entrada de dados (a confirmação será dada quando o
//usuário entrar com “1”). Quando o usuário informar “0” deve ser exibida a área
//total.

#include <stdio.h>

int main() {
    double width, length, totalArea = 0.0;
    int continueInput;
    
    do {
        printf("Digite a largura do cômodo: ");
        scanf("%lf", &width);
        
        printf("Digite o comprimento do cômodo: ");
        scanf("%lf", &length);
        
        totalArea += width * length;
        
        printf("Deseja continuar? (1-SIM ou 0-NÃO): ");
        scanf("%d", &continueInput);
        
    } while (continueInput == 1);
    
    printf("A área total da residência é: %.2lf\n", totalArea);
    
    return 0;
}