#include <stdio.h>
#include <locale.h>
#define Tamanho 2


 float calculamedia( float N1, float N2)
{
    float md;
    md = (N1 + N2)/2;
    return (md);
}

float valida_nota(){
	float i = 99;
	while (i>10 || i<0){
		scanf("%f",&i);
	}
	return i;
}


int main() {
	
	setlocale(LC_ALL,"Portuguese");
    
    struct estruturaAluno{
             int matricula;
             float N1;
             float N2;
             float media;
    };
    struct estruturaAluno aluno[Tamanho];
    
    int i;
    float media = 0;
    
    for (i = 0; i<Tamanho;i++){
       printf( "||||||||||||||||||||DADOS DO ALUNO||||||||||||||||||| \n\n");
       printf( "Matrícula do aluno: ");
       scanf ("%d" ,&aluno[i].matricula);
       printf( "Nota N1: ");
       aluno[i].N1 = valida_nota();
       printf( "Nota N2: ");
       aluno[i].N2 = valida_nota();
       aluno[i].media = calculamedia(aluno[i].N1,aluno[i].N2);
       media += aluno[i].N1 + aluno[1].N2;
	}
	
	media /= Tamanho;
    
    for (i=0;i<Tamanho;i++){
        printf( "\nBOLETIM DO ALUNO %d\n",aluno[i].matricula);
        printf( "\nNota N1: %.1f", aluno[i].N1);
        printf( "\nNota N2: %.1f", aluno[i].N2);
        if (aluno[i].media >= media){
        printf( "\nMedia..: %.1f (Acima da média da sala)\n ", aluno[i].media);
    } else{
    	printf( "\nMedia..: %.1f (Abaixo da média da sala)\n ", aluno[i].media);
	}
	}
	
	printf("\n\nQuantidade de alunos na sala: %d",Tamanho);
	printf("\nA media da sala é de: %.1f", media);
	
       return (0);
}
