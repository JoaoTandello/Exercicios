#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    float valor, res;
    int comb, op, litros;
    
    do{
    printf ("Informe o tipo de combustivel:\n");
    printf ("1- Gasolina\n");
    printf ("2- Etanol\n");
    printf ("3- Diesel\n");
    printf ("0- Sair\n");
    
    scanf ("%d", &op);
    
    switch (op){
        
        case 1:
        printf ("Informe o quanto de litros que irá abastecer: ");
        scanf ("%d", &litros);
        res = 6.27 * litros;    
        printf ("O valor final é de %.2f\n", res);
        break;
        
        case 2:
        printf ("Informe o quanto de litros que irá abastecer: ");
        scanf ("%d", &litros);
        res = 3.95  * litros;    
        printf ("O valor final é de %.2f\n", res);
        break;
        
        case 3:
        printf ("Informe o quanto de litros que irá abastecer: ");
        scanf ("%d", &litros);
        res = 6.10  * litros;    
        printf ("O valor final é de %.2f\n", res);
        break;
        
        case 0:
        printf ("Obrigado por abastecer no FuelMax!\n");
        break;
        
        default:
        printf ("Opção invalida\n");
        break;
    }
    
    }while(op!=0);

    return 0;
}
