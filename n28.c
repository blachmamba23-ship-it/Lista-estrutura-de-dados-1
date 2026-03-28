//Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados
//de altura e sexo (0=masc, 1=fem) das pessoas. Faça um programa que leia 50
//dados diferentes e informe:
//a) A média de altura das mulheres;
//b) A média de altura da população;
//c) O percentual de homens na população;
//d) A quantidade de mulheres;
//e) O percentual das mulheres abaixo de 1.65 m

#include <stdio.h>

int main() {
    double height, sumFemaleHeight = 0.0, sumTotalHeight = 0.0;
    int countMale = 0, countFemale = 0, countFemaleBelow165 = 0;

    for (int i = 0; i < 50; i++) {
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%lf", &height);

        printf("Digite o sexo da pessoa %d (0 - masculino, 1 - feminino): ", i +

1);
        int
        scanf("%d", &sex);
        if (sex == 0) {
            countMale++;                    
        } else if (sex == 1) {
            countFemale++;
            sumFemaleHeight += height;
            if (height < 1.65) {
                countFemaleBelow165++;
            }
        }   
        sumTotalHeight += height;
    }

    if (countFemale > 0) {
        double averageFemaleHeight = sumFemaleHeight / countFemale;
        printf("Média de altura das mulheres: %.2lf\n", averageFemaleHeight);
    } else {
        printf("Não foram informadas mulheres no grupo.\n");
    }

    if (countMale + countFemale > 0) {
        double averageTotalHeight = sumTotalHeight / (countMale + countFemale);
        printf("Média de altura da população: %.2lf\n", averageTotalHeight);

        double percentageMale = (countMale / (double)(countMale + countFemale)) * 100;
        printf("Percentual de homens na população: %.2lf%%\n", percentageMale);

        printf("Quantidade de mulheres: %d\n", countFemale);

        double percentageFemaleBelow165 = (countFemaleBelow165 / (double)countFemale) * 100;
        printf("Percentual de mulheres abaixo de 1.65 m: %.2lf%%\n", percentageFemaleBelow165);
    } else {
        printf("Não foram informadas pessoas no grupo.\n");
    }

    return 0;
}   

