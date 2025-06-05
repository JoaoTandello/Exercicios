#include <stdio.h>

int main(){
    int avaliacao[7];
    float soma = 0, media;
    
    printf("==== Bem-vindo ao Café com letras ==== \n");
    
    for (int i = 0; i < 7; i++) {
        do {
            printf("De uma nota de 0 a 10 para o atendimento: ", i + 1);
            scanf("%d", &avaliacao[i]);
            if (avaliacao[i] < 0 || avaliacao[i] > 10) {
                printf("Nota inválida!\n");
            }
        } while (avaliacao[i] < 0 || avaliacao[i] > 10); 
        
        if (avaliacao[i] >= 8) {
            printf("Sua avaliação é boa!\n");
        } else if (avaliacao[i] >= 5) {
            printf("Sua avaliação é razoavel.\n");
        } else {
            printf("Sua avaliação é ruim.\n");
        }
        
        soma += avaliacao[i];
    }
    
    media = soma / 7.0;
    printf("\nA média das 7 notas é: %.2f\n", media);
    
    return 0;
}
