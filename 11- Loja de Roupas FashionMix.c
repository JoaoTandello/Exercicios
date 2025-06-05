#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    int cod;

    printf("Digite o código da peça: ");
    scanf("%d", &cod);

    switch (cod){
        case 1:
            printf("Peça: Camisa\n");
            printf ("Preço: R$60");
            break;
        case 2:
            printf("Peça: Calça\n");
            printf ("Preço: R$140");
            break;
        case 3:
            printf("Peça: Casaco\n");
            printf ("Preço: R$159.90\n");
            break;
        default:
            printf("Código inválido! Digite 1, 2 ou 3\n");
            break;
    }

    return 0;
}
