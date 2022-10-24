// Enuciate 

// Escolha um algoritmos de ordenação Alg dentre: Bolha, Inserção ou Seleção. Escolhi Bubble
 
// Implemente 4 algoritmos de ordenação: 
// (i) o algoritmo Alg na versão iterativa; 
// (ii) o algoritmo Alg na versão recursiva; 
// (iii) mergesort;
// (iv) quicksort.


// Iniciando com n = 1000, gere 3 vetores aleatórios de tam n e execute cada um dos algoritmos medindo o tempo de execução. Some os tempos e divida por 3 para obter o tempo médio gasto por cada método. Faça o mesmo para n = 10.000, 100.000, 1.000.000 e 10.000.000.

// Elabore uma tabela com os resultados.

// Compare e analise o resultado de cada um dos pares de algoritmos abaixo:

// a) Alg iterativo X  Alg recursivo
// b) Mergsort X Quicksort
// c) A versão mais rápida de alg X o mais lento dentre Mergesort e Quicksort


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir (int V[], int n) {
    int i;
    printf("(");
    for (i=0; i<n; i++) printf("%3d ", V[i]);
    printf(")\n");
}

// ORDENAÇÃO PELO METODO BOLHA ITERATIVO 
void bolha (int V[], int n) {
    int i, j, aux;
    for (i=0; i<n; i++)
        for (j=0; j<n-i-1; j++)
        if (V[j]>V[j+1]) { 
            aux = V[j]; 
            V[j] = V[j+1];
            V[j+1] = aux; }
    }

// ORDENAÇÃO PELO METODO BOLHA RECURSIVO
void bolharec_troca(int *x, int *y){
    int aux = *x;
            *x = *y;
            *y = aux;
}

void bolharec(int V[],int n){

    if(n==1) return;

    int c=0;
    for(int i=0;i<n-1;i++){
        if(V[i]>V[i+1]){
        bolharec_troca(&V[i],&V[i+1]);
        c++;
        }
    }

    if(c==0) return;

    bolharec(V,n-1);
}

void mergsort(int V[],int n){

}

void criarvetor(int V[],int n){
    srand(time(NULL));
    for(int i=0; i<n; i++){
        V[i]= rand();
    }
}

int main () {

    clock_t t t1;
    int n = 1000;
    int *V = NULL;

    criarvetor(V,n);
    imprimir(V, n);
    time_t y = time(NULL);
    t = clock();
    bolharec(V, n);
    time_t tf = time(NULL);
    t = clock() - t;
    printf("\n\nTempo de execução do algoritmo Booble Sorte Recursivo -> %f", ((double)t)/(CLOCKS_PER_SEC));
    printf("\n\nTempo de execução do algoritmo Booble Sorte Recursivo -> %f", (tf-y));
    //imprimir(V, n);
}