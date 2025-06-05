#include <stdio.h>

typedef struct {
char nome[20];
int idade, IMC;
float imc, peso, altura;
}Calculo;

Calculo calculos;

void pesoAluno();

int main (){


printf("Informe seu nome:\n");
scanf("%s",calculos.nome);
printf("Informe sua idade:\n");
scanf("%d",&calculos.idade);
printf("Informe seu peso:\n");
scanf("%f", &calculos.peso);
printf("Informe sua altura:\n");
scanf("%f", &calculos.altura);

calculos.IMC = (calculos.peso/ calculos.altura * calculos.altura);

if (calculos.IMC >= 30){
printf("Obeso");
}
else if(calculos.IMC >= 25){
printf("Sobrepeso");
}
else {
printf("Saudavel");
}
return 0;
}
