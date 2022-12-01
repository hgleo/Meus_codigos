struct listaD{
    int info;
    int listaD *ant;
    int listaD *prox;
};
typedef struct listaD LstD;

// Função de inserir.

LstD lstDInsere(LstD* l, int v){
    LstD* novo = (LstD*)malloc(sizeof(LstD));
    novo->info = v;
    novo->listaD = l;
    novo->ant=NULL;
    // Verifica se lista tá vazia.

    if( l != NULL ){
        l->ant = novo;
    }
    return novo;
}

// Função de busca.

LstD* lstDBusca(LstD* l, int v){
    LstD* p;
    for(p=l;p!=NULL;p=p->prox){
        if(p->info == v){
            return p;
        }
    }
    return NULL;
}
