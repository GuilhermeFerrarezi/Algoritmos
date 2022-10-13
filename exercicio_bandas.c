#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 3

typedef struct Banda {
char nome[50];
char estilo[50];
int integrantes;
int rank;
} BANDA;

void cadastraBanda(BANDA *X){
int i;
for (i=0;i<TAM;i++){
printf("Nome:"); scanf("%s", X[i].nome);
printf("Estilo musical:"); scanf("%s", X[i].estilo);
printf("Número de integrantes:"); scanf("%d", &X[i].integrantes);
printf("Ranking de favoritas:"); scanf("%d", &X[i].rank);
}
}

void exibeBanda(BANDA X){
printf("Nome: %s;\nEstilo musical: %s;\nNúmero de integrantes: %d;\nRanking: %dº\n\n", X.nome, X.estilo, X.integrantes, X.rank);
}

void pesquisaBanda(BANDA *X){
char aux[50];
int i;
printf("\nInsira o estilo da banda para pesquisa:");
scanf("%s",&aux);

for (i=0;i<TAM;i++){
if (strcmp(aux,X[i].estilo)==0){
printf("Banda encontrada: %s\n",X[i].nome);
}
}
}

int main (){
setlocale(LC_ALL, "Portuguese");

char aux[50];
int i;
BANDA V [TAM];

printf("----- BANDAS FAVORITAS -----\n");

printf("-----CADASTRO DE BANDAS-----\n");
printf("\nCadastro da %dº banda:\n\n", i+1);
cadastraBanda(V);
for (i=0;i<TAM;i++){
exibeBanda(V[i]);
}
pesquisaBanda(V);



}
