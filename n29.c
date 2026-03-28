//Faça um programa que leia a quantidade de dias de permanência no hotel de
//cada hóspede. Sabe-se que o valor da diária é R$ 150,00. Aplique as regras da
//tabela abaixo para determinar o valor a pagar por cada hóspede. Para finalizar
//deve ser informado zeros para a quantidade de diárias. Calcule e imprima:
//10. Quantidade
//Diárias
//11. Percentual
//desconto
//12. Até 5 diárias 13. 5%
//14. De 6 a 10 diárias 15. 10 %
//16. Acima de 10
//diárias 17. 15%
//a) Quantidade de hóspedes que ficou mais de 20 dias no hotel;
//b) Valor de cada hóspede;
//c) Média do valor das contas pagas pelos hóspedes.
//d) Média dias permanência;
//e) O valor da maior conta paga

#include <stdio.h>

int main() {
    int days, countMoreThan20Days = 0, totalGuests = 0;
    double totalAmount = 0.0, maxAmount = 0.0;

    while (1) {
        printf("Digite a quantidade de dias de permanência (ou 0 para encerrar): ");
        scanf("%d", &days);

        if (days == 0) {
            break;
        }

        double amount = days * 150.0;

        if (days <= 5) {
            amount *= 0.95; // 5% de desconto
        } else if (days <= 10) {
            amount *= 0.90; // 10% de desconto
        } else {
            amount *= 0.85; // 15% de desconto
        }

        printf("Valor a pagar pelo hóspede: R$ %.2lf\n", amount);

        if (days > 20) {
            countMoreThan20Days++;
        }

        totalAmount += amount;
        totalGuests++;

        if (amount > maxAmount) {
            maxAmount = amount;
        }
    }

    if (totalGuests > 0) {
        double averageAmount = totalAmount / totalGuests;
        double averageDays = (double)totalAmount / (totalGuests * 150.0); // Média de dias baseada no valor total

        printf("Quantidade de hóspedes que ficou mais de 20 dias: %d\n", countMoreThan20Days);
        printf("Média do valor das contas pagas pelos hóspedes: R$ %.2lf\n", averageAmount);
        printf("Média de dias de permanência: %.2lf\n", averageDays);
        printf("Valor da maior conta paga: R$ %.2lf\n", maxAmount);
    } else {
        printf("Nenhum hóspede foi registrado.\n");
    }

    return 0;
}