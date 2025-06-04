#include <stdio.h>
int main (){
	int ic = 0,pontos = 0, cont;
	
	do{
		printf("Informe o numero de ingressos comprados:\n");
		scanf("%d", &ic);
		pontos = pontos + ic;
		printf("Os pontos acumulados sao %d\n", pontos);
		printf("Digite 1 para continuar e 0 para sair\n");
		scanf("%d",&cont);
		printf("Saindo...\n");
	}while(cont == 1);
	 
	 return 0;
}