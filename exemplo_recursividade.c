#include <stdlib.h>

void ciclo (int n, int limite){
	printf("\n %d", n);
	if(n < limite) ciclo(n+1, limite);
}

void magico(int n){
	printf("\n %d", n);
	if(n<5) magico (n+1);
	printf("\n %d", n);
}

void misterio (int n){
	if(n<5){
		misterio(n+1);
		printf("\n %d", n);
		misterio(n+1);
	}
}

int main(){
	printf("CICLO (2,10)"); ciclo(2,10);
	printf("\n\nMAGICO(2)"); magico(2);
	printf("\n\nMISTERIO(2)"); misterio(2);
	
	system("pause");
}
