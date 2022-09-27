#include <stdio.h>
#include <locale.h>
#define Tamanho 2


 float calculamedia( float N1, float N2)
{
    float md;
    md = (N1 + N2)/2;
    return (md);
}


int main() {
	
	setlocale(LC_ALL,"Portuguese");
    
    struct estruturaAluno{
             int matricula;
             float N1;
             float N2;
             float media;
    };
    struct estruturaAluno aluno[2];
    
    int i;
    float media = 0;
    
    for (i = 0; i<Tamanho;i++){
       printf( "||||||||||||||||||||DADOS DO ALUNO||||||||||||||||||| \n\n");
       printf( "Matrícula do aluno: ");
       scanf ("%d" ,&aluno[i].matricula);
       printf( "Nota N1: ");
       scanf ("%f", &aluno[i].N1);
       printf( "Nota N2: ");
       scanf ("%f", &aluno[i].N2);
       aluno[i].media = calculamedia(aluno[i].N1,aluno[i].N2);
       media += aluno[i].N1 + aluno[1].N2;
	}
	
	media /= Tamanho;
    
    for (i=0;i<Tamanho;i++){
        printf( "\nBOLETIM DO ALUNO %d\n",aluno[i].media);
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



