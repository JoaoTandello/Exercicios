#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "");
    int quartos;
    float ocupaçao=0, taxa;
    
    for(int i=0;i<10;i++){
        printf("quarto %d ocupado?: ",i+ 1);
        scanf("%d",&quartos);
        if(quartos==1){
            ocupaçao++;
        }
    }
    
    taxa=(ocupaçao/10)*100;
    printf("taxa de ocupaçao: %.2f%%",taxa);

return 0;
}
