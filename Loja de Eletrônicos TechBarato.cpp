//Loja eletronicos
#include <stdio.h>

int main (){
	float prod[10];
	float maior, menor;
	
	for (int i = 0; i <= 9; i++){
	
	printf("Informe o preco dos produtos\n");
	scanf("%f", &prod[i]);
}
	maior = prod[0];
	menor = prod[0];
	
	for(int i = 1;i<=9;i++){
		if(maior < prod[i]){
		maior = prod[i];
		}
		if(menor > prod[i]){
			menor = prod[i];
		}
		
	}
	printf("Menor %.2f", menor);
	printf("Maior %.2f", maior);
	
	
	
	return 0;
}