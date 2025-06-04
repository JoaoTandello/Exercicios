#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); 
    int filmes;

    printf("Bem-vindo a locadora Vídeo Boom!\n");

    do {
        printf("\nQuantos filmes você deseja alugar: ");
        scanf("%d", &filmes);

        if (filmes > 5) {
            printf("Quantidade inválida! Por favor escolha entre 1 a 5 filmes.\n");
        }
    } while ( filmes > 5);

    printf("\nVocê escolheu alugar %d filmes! Obrigado.\n", filmes);

    return 0;
}