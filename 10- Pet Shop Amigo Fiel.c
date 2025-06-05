#include <stdio.h>

 typedef struct {
    char nome[50];
    char tipo[30];
    int idade;
} Animal;

Animal animal[5];

void mostrarAnimais() {

int tamanho;
	
        printf("Animais com mais de 5 anos:\n");
    for (int i = 0; i < tamanho; i++) {
        if (animal[i].idade > 5) {
            printf("Nome: %s\n", animal[i].nome);
        }
    }
}

int main() {
    
    int i;

    for (i = 0; i < 6; i++) {
        printf("Cadastro do animal %d:\n", i + 1);
        
        printf("Nome: \n");
        scanf("%s", animal[i].nome);

        printf("Tipo: \n");
        scanf("%s", animal[i].tipo);

        printf("Idade: \n");
        scanf("%d", &animal[i].idade);
    }

    return 0;
}
