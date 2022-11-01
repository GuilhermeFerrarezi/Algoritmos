#include <stdio.h>
#include <locale.h>

void ciclo(int n, int limite){
	for(n;n<=limite;n++){
		printf("%d\n",n);
	}
} 

int main(){
	ciclo(2,10);
}
