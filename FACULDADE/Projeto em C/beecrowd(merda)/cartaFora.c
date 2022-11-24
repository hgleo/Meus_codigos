#include<stdio.h>
#include<stdlib.h>

typedef struct lista{
    int info;
    struct lista* prox;
} Lista;

typedef struct fila{
    Lista* ini;
    Lista* fim;
} Fila;

Fila* cria_fila(){
    Fila* f = (Fila *) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

void insere_fila(Fila *f, int v){
    Lista* n = (Lista *) malloc(sizeof(Lista));
    n->info = v;
    n->prox = NULL;

    if(f->fim!=NULL){
        f->fim->prox = n;
    }
    else f->ini = n;
    f->fim = n;
}

int fila_vazia(Fila* f){
    return f->ini==NULL;
}

int retira_fila(Fila* f){
    Lista* t;
    int v;
    
    if(fila_vazia(f)) exit(-1);
    
    t = f->ini;
    v = t->info;
    f->ini = t->prox;
    if(f->ini==NULL) f->fim=NULL;
    free(t);
    return v;
}

void imprime_fila(Fila* f){
    Lista* q;
    printf("Resantes: ");
    for(q = f->ini; q!=NULL; q=q->prox){
        printf("%d", q->info);
    }
    printf("\n");
}

void libera_fila(Fila* f){
    Lista* q = f->ini;
    while(q!=NULL){
        Lista* t = q->prox;
        free(q);
        q=t;
    }
    free(f);
}

int main(){

    int n;
    
    scanf("%d", &n);
    while(n!=0){
        int descarta[n-1];
        Fila* cartas = cria_fila();
        // preenche fila
        for(int i=1; i<=n; i++){
            insere_fila(cartas, i);
        }

        // loop retira
        int i = 0;
        while(cartas->ini->prox != NULL){
            descarta[i] = retira_fila(cartas);
            insere_fila(cartas, retira_fila(cartas));
            i++;
        }

        printf("descarta cards: ");
        for(int i=0; i<n-2; i++) printf("%d, ", descarta[i]);
        printf("%d", descarta[n-2]);
        printf("\n");

        imprime_fila(cartas);
        // loop de leitura
        scanf("%d", &n);
        libera_fila(cartas);
    }


    return 0;

}