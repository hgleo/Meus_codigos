#include <stdio.h>
#include <stdlib.h>

// Criação de Lista.

struct lista{
    int info;
    struct lista *prox;

};
typedef struct lista Lista;

// Função de Criação.
// Retorna lista vazia.

Lista *lstCria(void){
    return NULL;
}

// Insere na Lista.
//Retorna lista atualizada.

Lista* lstInsere(Lista* l, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

/*
Lista* lstInsereDP(Lista **l , int i){

    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = *l;
    *l = novo;
    return novo;
}
*/
// Função que percorre a lista e mostra os itens.

void lstPrint(Lista* l){

    Lista *p; // Variável pra percorrer a lista.
    for(p=l;p!=NULL;p=p->prox){
        printf("info =%d \n",p->info);
    }
}

// Verifica se a função é vazia.

int lstVazia(Lista* l){
    /*if( l == NULL){
        return 1; // Retorna 1 se é vazia.
    }
    else
    return 0;*/

    // Outro modo de escrever.
     return ( l == NULL);
}

// Função que busca um elemento da lista.

Lista* lstBusca(Lista* l, int v){
    Lista* p;
    for(p=l;p!=NULL;p=p->prox){
        if(p->info == v){
            return p;
        }
    return NULL; // Caso não ache o elemento.
    }
}

// Função que retira um elemento da lista, caso exista.

Lista* lstRetira(Lista* l, int v){
    Lista* ant = NULL; // Pointer pro elemento anterior.
    Lista* p = l; // Pointer pra percorrer a lista.

    // Procura um elemento na lista, guardando o anterior.
    while(p != NULL && p-> info != v){
        ant = p;
        p = p-> prox;
    }
    // Verifica se achou elemento
    if(p == NULL){
        return l; // Caso não ache, retorna a lista.
    }
    // Retira elemento. 
    if(ant == NULL){
        // Retira do início.
        l = p->prox;
    }
    else{
        // Retira elemento do meio da lista.
        ant-> prox = p->prox;
    }
    free(p);
    return l;

}

// Libera a lista.

void lstLibera(Lista* l){
    Lista* p = l;
    while(p!= NULL){
        Lista* t = p->prox; // Guarda referência para prox elemento.
        free(p); // Libera a memória apontada por p.
        p=t; // Faz p apontar pro prox.
    }
}
/*
// TAD: Lista de inteiros.

typedef struct lista Lista;

Lista* lstCria(void);
void lstLibera(Lista* l);

Lista* lstInsere(Lista* l, int i);
Lista* lstRetira(Lista* l, int v);

int lstVazia(Lista* l);
Lista* lstBusca(Lista* l,int v);
void lstPrint(Lista* l);
*/
// Função Insere um elemento em ordem.

Lista* lstInsereOrd(Lista* l, int v){

    Lista* novo;
    Lista* ant = NULL;
    Lista* p = l;
    
    // Procura posição de Inserção.
    
    while(p!= NULL && p->info < v){

        ant = p;
        p = p->prox;
    }

    // Cria novo elemento.

    novo = (Lista*) malloc(sizeof(Lista));
    novo->info = v;

    // Encadeia elemento.

    if(ant == NULL){

        novo->prox = l;
        l = novo;

    }
    else{
        novo->prox = ant;
        ant->prox = novo;
    }

    return l;
}