#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char nome[30];
    float preco;
    int cod;
} Produto;

Produto prod[5];
int numProduto=0;

int main(){
    setlocale(LC_ALL,"");
    int i;
    
    for(int i=0;i<5;i++){
        printf("Digite o nome do produto %d: ",i+ 1);
        scanf(" %[^\n]",prod[i].nome);
        printf("Digite o código do produto %d: ",i+ 1);
        scanf("%d",&prod[i].cod);
        printf("Digite o valor do produto %d: ",i+ 1);
        scanf("%f",&prod[i].preco);
        
        numProduto++;
    }
    
    for(int i=0;i<numProduto;i++){
        if(prod[i].preco>=10){
            printf("\n");
            printf("Nome do produto %d: %s\n",i+ 1, prod[i].nome);
            printf("Código do produto %d: %d\n",i+ 1, prod[i].cod);
            printf("Valor do produto %d: %.2f\n",i+ 1, prod[i].preco);
         
        }
    }
    
    return 0;
}
