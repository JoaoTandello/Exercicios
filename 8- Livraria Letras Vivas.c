#include <stdio.h>

typedef struct{
	int anop;
	char nome[30];
	
}Livros;

Livros livros[8];

int nl;

int main (){
	for (int i = 0; i < 8; i++){
		printf("Informe o nome do livro:\n");
		scanf(" %[^\n]", livros[i].nome);
		printf("Informe o ano de publicacao do livro:\n");
		scanf("%d", &livros[i].anop);
		nl++;
	}
		for(int i = 0; i < nl ;i++){
			
			if(livros[i].anop < 2000){
			printf("Os livros sao %s\n", livros[i].nome);
			printf("O ano do livro e %d\n", livros[i].anop); 
}}
	return 0;

}
