#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
/*

  Cria um vetor de 1000 elementos
  Preencher com numeros aleatorios
  Chamar a função pesquisa linear;

*/

int bubbleSortRec(int *V, int tam){
    int aux, swap = 0;
    for (int i = 0; i < tam - 1; i++) {
    if (V[i] > V[i + 1]) {
        aux = V[i];
        V[i] = V[i + 1];
        V[i + 1] = aux;
        swap = 1;
    }
    if (swap != 0 && tam > 1)
        bubbleSortRec(V, tam - 1);
  }
}

int bubbleSortRecInv(int *V, int tam) {
    int aux, swap = 0;
    for (int i = 0; i < tam - 1; i++) {
    if (V[i] < V[i + 1]) {
        aux = V[i];
        V[i] = V[i + 1];
        V[i + 1] = aux;
        swap = 1;
    }
    if (swap != 0 && tam > 1)
        bubbleSortRecInv(V, tam - 1);
  }
}


void verifica(int *V){
    
    int i=0;

    if(V[i]>V[N]){
        printf("\nVetor em Ordem Decrescente. ");
    } 
        else if(V[i]<V[N]){
            printf("\nVetor em Ordem Crescente. ");
        }
            else if(V[i]==V[N]){
                printf("\nVetor Idêntico. ");
            } 
    
}    

void pesquisaLinear(int *V, int num) {
    int cont = 0;
    for (int i = 0; i < N; i++) {
    if (num == V[i]) {
        cont++;
    }
}
  if (cont > 0) {
    printf("O número %d foi encontrado %d vezes.", num, cont);
}
else{
    printf("O número %d não foi encontrado.", num);
}
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int tam = N;
    int num, opc;
    int *V;
    V = malloc(sizeof(int) * N);
    printf("\nVetor aleatório não ordenado: [ ");
    for (int i = 0; i < N; i++) {
        V[i] = rand() % N;
        printf("%d ", V[i]);
    }
    printf("]\n");
    bubbleSortRec(V, tam);
    printf("Vetor Ordenado: [ ");
    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }
    printf("]");

    verifica(V);

    bubbleSortRecInv(V, tam);
    printf("\nVetor Ordenado Invertido: [ ");
    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }
    printf("]");

    verifica(V);

do{

    printf("\nDigite o número a ser encontrado: ");
    scanf("%d", &num);
    pesquisaLinear(V, num);
    printf("\nDeseja continuar testando (1)Continua|(0)Para: ");
    scanf("%d", &opc);

}while (opc != 0);
    
    free(V);
    
    return 0;
}
