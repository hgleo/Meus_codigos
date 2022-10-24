
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main()
{
    int i,num1,frequencia[10]={0},vetor[TAMANHO]={0};
    srand(time(NULL));

    for(i=0;i<TAMANHO;i++){     //cria um vetor com números aleatórios de 1 até 20
        num1=rand()%20+1;
        vetor[i]= num1;
    }

    printf("\n*****Sequencia desordenada*****\n\n");  //imprime o vetor
    for(i=0;i<TAMANHO;i++){
    printf("%4d",vetor[i]);
    if((i+1)%10==0)
        printf("\n");
    }
    for(i=0;i<50;i++){          //contador frequencia(conta quantas vezes cada número aparece)
        ++frequencia[vetor[i]];
    }
    printf("\n\n");
    printf("%s%20s\n","valor","frequencia");
    for(i=0;i<=20;i++){
        printf("%4d%20d\n",i,vetor[i]);
    }

    return 0;
}