#include <stdio.h>
#include <locale.h>
#include <math.h>

typedef struct{
	int x;
	int y;
} Ponto;

double calculadistancia(int x1, int y1,int x2,int y2){
	return (sqrt(pow((x1-x2),2) + pow((y1-y2),2)));
}

#define QUANTIDADE_DE_PONTOS 3

int main(){
	int i;
	setlocale (LC_ALL, "Portuguese");
	Ponto pontos[QUANTIDADE_DE_PONTOS];
	pontos[0].x = -4; pontos[0].y = 7;
	pontos[1].x = 2; pontos[1].y = -9;
	pontos[2].x = 5; pontos[2].y = 3;
	
	double soma = 0;
	
	soma += calculadistancia(pontos[0].x,pontos[0].y,pontos[1].x,pontos[1].y);
	soma += calculadistancia(pontos[1].x,pontos[1].y,pontos[2].x,pontos[2].y);
	soma += calculadistancia(pontos[2].x,pontos[2].y,pontos[0].x,pontos[0].y);

	printf("%.2lf", soma);

	for(i=0;i<=QUANTIDADE_DE_PONTOS;i++){
		if (pontos[i].y > 0){
			printf("\nPonto acima da reta, coordenadas:");
			printf("\nX: %d",pontos[i].x);
			printf("\nY: %d",pontos[i].y);
		}
	}
}


//¦¦£

