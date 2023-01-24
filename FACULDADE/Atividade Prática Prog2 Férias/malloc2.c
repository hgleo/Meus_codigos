#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 10

*obtemMaiorMedia(int *V, int *novoTam, int *media){

    *media = 0;

    //Calculando a média.
    for(int i=0; i< TAM; i++){
        *media += V[i];
    }
    *media/=TAM;

    //Acima da média.
    
}

void main(){

    int tamNovo;

    int V[TAM];
    printf("\nVetor Primário: > ");
    for (int i=0; i<TAM; i++){
        V[i] = rand()%11;
        printf("%.1f",V[i]);
    }
    printf(" < \n");
    
    int *VmaiorMedia;
    
}