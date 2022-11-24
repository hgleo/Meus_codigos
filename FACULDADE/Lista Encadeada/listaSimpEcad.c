#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define lim 100

typedef struct lista{
    int info;
    struct lista *prox;
}Lista;

Lista* inserir(Lista *L, int x){
    Lista* pt=NULL;

    pt=(Lista*)malloc(sizeof(Lista));
    pt->prox=L;
    pt->info=x;
    return pt;
}

void imprimir(Lista *L){
    Lista* pt=L;

    printf("L = ");
    while(pt!=NULL){
        printf("%d ",pt->info);
        pt=pt->prox;
    }
}

void preOrdem(Lista *L){

    if(L!=NULL){
        printf("%d ",L->info);
        preOrdem(L->prox);
    }
}

void posOrdem(Lista *L){

    if(L!=NULL){
        posOrdem(L->prox);
        printf("%d ",L->info);
    }
}


int main(){

    Lista* L=NULL;
    int tam;

    printf("Digite o tamanho da lista: ");
    scanf("%d", &tam);
    srand(time(NULL));
    for(int i=0;i<tam;i++){
        L=inserir(L,rand()%lim);
    }
    imprimir(L);
    printf("\n");


return 0;
}