#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    float valor, valorC, desconto;
    int pratos, sobremesa, bebida;

    printf("Valor total da conta: \n");
    scanf("%f", &valorC);
    printf("Número de pratos principais pedidos:\n");
    scanf("%d", &pratos);
    printf("Pediu sobremesa? (1: Sim, 2: Não):\n");
    scanf("%d", &sobremesa);
    printf("Pediu bebida? (1: Sim, 2: Não):\n");
    scanf("%d", &bebida);

    if (pratos>3) {
        desconto+= valorC*0.10; 
    }
    
    if (sobremesa== 1 && bebida== 1) {
        desconto += valorC*0.05; 
    }

 
    valor= valorC-desconto;

    if (desconto > 0) {
        printf("Desconto: R$ %.2f\n", desconto);
        printf("Valor final da conta: R$ %.2f\n", valor);
    } else {
        printf("Nenhum desconto aplicado.\n");
        printf("Valor final da conta: R$ %.2f\n", valorC);
    }

    return 0;
}
