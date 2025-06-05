#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    char nome[50];
    int quant;
    float preco;
} Produto;

Produto produtos[10];

int numProduto = 0;

void cadastrarProduto();
void calcularValor();

int main() {
    setlocale(LC_ALL, "");
    int op;

    do {
        printf("==== Mercado SuperCompra ====\n");
        printf("1-Cadastrar produto\n");
        printf("2-Calcular valor total em estoque\n");
        printf("0-Sair\n");
        printf("Selecione uma opção: ");
        scanf("%d", &op);

        system("clear"); 

        switch (op) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                calcularValor();
                break;
            case 0:
                printf("obrigado!\n");
                break;
            default:
                printf("\nopção inválida.\n");
                break;
        }
       
    } while (op != 0);

    return 0;
}

void cadastrarProduto() {
  if (numProduto >= 10) {
        printf("\nLimite de 10 produtos atingido!\n");
        return;
    }
    printf("nome do produto: ");
    scanf(" %[^\n]", produtos[numProduto].nome);
    printf("quantidade: ");
    scanf("%d", &produtos[numProduto].quant);
    printf("preço: ");
    scanf("%f", &produtos[numProduto].preco);
    
    numProduto++;
    printf("\nProduto cadastrado com sucesso!\n");
}

void calcularValor() {
    if (numProduto == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    float valor = 0;
    for (int i = 0; i < numProduto; i++) {
        valor += produtos[i].quant * produtos[i].preco;
    }
    
    printf("Valor total em estoque: R$ %.2f\n", valor);
}
