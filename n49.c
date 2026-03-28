// Foi feita uma pesquisa com um grupo de alunos de uma universidade, onde se
// perguntou para cada aluno, o número de que utilizou o restaurante da
// universidade, no último mês. O final é determinado quando for digitado valor
// negativo para o número de vezes de uso. Construa um programa que
// determine:
// a) O percentual de alunos que utilizou menos de 10 vezes o restaurante;
// b) O percentual de alunos que utilizou entre 10 e 15 vezes;
// c) O percentual de alunos que utilizou o restaurante acima de 15 vezes;
// d) O número de alunos entrevistados;

#include <stdio.h>

int main() {
    int usageCount, totalStudents = 0;
    int countLessThan10 = 0, countBetween10And15 = 0, countAbove15 = 0;

    while (1) {
        printf("Digite o número de vezes que o aluno utilizou o restaurante (negativo para encerrar): ");
        scanf("%d", &usageCount);

        if (usageCount < 0) {
            break; // Encerra a entrada de dados
        }

        totalStudents++;

        if (usageCount < 10) {
            countLessThan10++;
        } else if (usageCount <= 15) {
            countBetween10And15++;
        } else {
            countAbove15++;
        }
    }

    if (totalStudents > 0) {
        double percentLessThan10 = (countLessThan10 / (double)totalStudents) * 100;
        double percentBetween10And15 = (countBetween10And15 / (double)totalStudents) * 100;
        double percentAbove15 = (countAbove15 / (double)totalStudents) * 100;

        printf("Percentual de alunos que utilizou menos de 10 vezes: %.2lf%%\n", percentLessThan10);
        printf("Percentual de alunos que utilizou entre 10 e 15 vezes: %.2lf%%\n", percentBetween10And15);
        printf("Percentual de alunos que utilizou o restaurante acima de 15 vezes: %.2lf%%\n", percentAbove15);
    } else {
        printf("Nenhum aluno foi entrevistado.\n");
    }

    printf("Número total de alunos entrevistados: %d\n", totalStudents);

    return 0;
}