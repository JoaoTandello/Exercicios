#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct carros {
    char marca[30];
    int ano;
    float km;
    
} Carro;
struct carros carro[5];

void cadastro();
void listar();

int total = 0;

int main() {
    int op;
    printf("==== Bem vindo a Oficina AutoCheck ===\n");
    do {
        printf("Escolha uma opçao:\n");
        printf("1- Cadastrar carro\n");
        printf("2-  Listar carros com mais de 100.000 km rodados\n");
        printf("0- Sair\n");
        scanf("%d", &op);
     
        switch (op) {
            case 1:
                cadastro();
                break;
                
            case 2:
                listar();
                break;
                
            case 0:
                printf("Obrigado!\n");
                break;
                
            default:
                printf("Opção invalida!\n");
                break;
        }

    } while (op != 0);

    return 0;
}

void cadastro() {
    if (total >= 6) {
        printf("Máxima quantidade de cadastro atingida!!\n");
        return;
    }

    printf("Marca do carro:\n");
    scanf("%s", carro[total].marca);

    printf("Ano do carro:\n");
    scanf("%d", &carro[total].ano);

    printf("Quilometragem do carro:\n");
    scanf("%f", &carro[total].km);

   total++;

    printf("Carro cadastrado com sucesso!\n");
}

void listar() {
    int encontrados = 0;
    printf("Carros com mais de 100.000 km rodados:\n");

    for (int i = 0; i < total; i++) {
        if (carro[i].km > 100.000) {
            printf("Marca: %s, Ano: %d, quilometragem: %.2f\n", carro[i].marca, carro[i].ano, carro[i].km);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum carro com mais de 100.000 km rodados cadastrado.\n");
    }
}