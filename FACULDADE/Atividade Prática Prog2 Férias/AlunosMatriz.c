/******************************************************************************

Ler as notas de 3 provas de todos alunos de uma turma (são 10 alunos) e armazenar
numa matriz onde cada linha representa um aluno e cada coluna uma prova. Calcular a
nota media de cada aluno e a nota média de cada prova. Apresentar os resultados.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define NOTAS 4
#define ALUNOS 11
int main(){
    
    float Sala[ALUNOS][NOTAS];
    printf("\n");
    for( int i = 0; i < ALUNOS-1; i++){
        float aux=0;
        //float aux2 =0;
        for(int j = 0; j < NOTAS-1; j++){
            Sala[i][j] =  9 /*(float)(rand()%11)*/;
            aux+=Sala[i][j];
            //aux2+=Sala[10][j];
            //Sala[10][j]= aux2/9;
        }
        
        Sala[i][3]= aux/3;
        
    }

    float mediaNotas[9];
    for( int j = 0; j < NOTAS-1; j++){
        float aux3=0;
        
        for(int i = 0; i < ALUNOS-1; i++){
        aux3 += Sala[i][j];
        mediaNotas[i] = aux3;    
        }
        
        
    }
    
    for( int i = 0; i < ALUNOS-1; i++){
        printf(" Aluno %d: ", i+1);
        for(int j = 0; j < NOTAS; j++){
            printf(" %.1f",Sala[i][j]);
        }
        printf(" Média das Provas: %.1f", mediaNotas[i]);
        printf("\n");
    }
    
    

    return 0;
}


