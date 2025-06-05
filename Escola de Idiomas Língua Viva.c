#include <stdio.h>

int main() {
    float notas[5][4], med[5];
    for (int i =0;i<5;i++) {
        float soma = 0;
        printf("Digite as notas do %d° aluno:\n", i+ 1);
        for (int j=0;j<4;j++) {
            scanf("%f", &notas[i][j]);
            soma+= notas[i][j];
        }
        med[i]=soma/4;
        printf("\nA média final: %.2f %s\n", med[i], (med[i]>=6) ?"(Aprovado)":"(Reprovado)");
    }
    return 0;
}
