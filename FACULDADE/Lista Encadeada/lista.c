#include <stdio.h>
#include <stdlib.h>

// Criação de uma lista, usando struct.

struct lista {
    struct lista *next;
    int info;
};
typedef struct lista Lst;

// Função que gera lista vazia.

Lst *lstCreate(){
    return NULL; // Ela gera e seta a lista como vazia.
}

Lst *lstInsert(Lst* l, int i){
    Lst* novo = (Lst*)malloc(sizeof(Lst));
    novo->info = i;
    novo->next = l;
    printf("Numero inserido com sucesso. \n");
    return novo;
}

// Função que mostra a minha lista.

Lst *lstPrint(Lst* l){
    Lst* p;
    printf("Lista: |");
    for(p = l; p != NULL; p = p->next){
        printf(" %d |", p->info);
    }
}

// Libera a memória alocada da lista.

void lstFree(Lst* l){
    Lst* p = l;
    while(p!= NULL){
        Lst* t = p->next; // Guarda referência para prox elemento.
        free(p); // Libera a memória apontada por p.
        p=t; // Faz p apontar pro prox.
    }
}

// Função que busca algum elemento da minha lista.

Lst* lstSearch(Lst* l, int s){
    Lst* s;
    for(s = l; s!= NULL; s = s->next){
        return printf("Num encontrado!\n");
    }
    return printf("Num n encontrado!\n");
}

// Função que retira algum elemento da lista, caso exista.

void lstDelete(Lst* l, int d){
    Lst* ant = NULL; // Aponta pro anterior.
    Lst* p = l; // Aponta pra percorrer a lista.

    // Verificação se existe esse elemento.
    while(p != NULL && p-> info != d){
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
int main(){
    int opc;
    
    Lst* l; // Declara a lista vazia,
    l = lstCreate(); // Inicia a lista vazia.
    
    do{
        printf("\nInsira a opc adequada para o que deseja: \n");
        printf("[1] para inserir na lista.\n[2] Para exibir a lista.\n[3] Para buscar um elemento.\n[4] Para Excluir um elemento.\n[0] Para finalizar a lista.\n");
        scanf("%d", &opc);

        switch(opc){
            case 1:
                int i;
                printf("Insira o num: ");
                scanf("%d", &i);
                l = lstInsert(l,i);
            break;
            case 2:
                lstPrint(l);
            break;
            case 0:
                lstFree(l);
                printf ("Lista finalizada com sucesso!\n");
            break;
            default:
                printf("Opc não consta. \n");
            break;


            system("clear");
        }
    }while(opc != 0);
    return 0;
}
