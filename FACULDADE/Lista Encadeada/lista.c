#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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
    printf("Número inserido com sucesso. \n");
    return novo;
}

// Função que mostra a minha lista.

void lstPrint(Lst* l){
    Lst* p;
    printf("Lista [");
    for(p = l; p != NULL; p = p->next){
        printf(" %d ", p->info);
    }
    printf("]");
}

// Libera a memória alocada da lista.

void lstFree(Lst* l){
    Lst* p = l;
    while(p!= NULL){
        Lst* t = p->next; // Guarda referência para next elemento.
        free(p); // Libera a memória apontada por p.
        p=t; // Faz p apontar pro next.
    }
}

// Função que busca algum elemento da minha lista.

Lst* lstSearch(Lst* l, int s){
    Lst* p;
    for(p = l; p!= NULL; p = p->next){
        if(p->info == s) 
        return p;
    }
    return NULL;
}

// Função que retira algum elemento da lista, caso exista.

Lst* lstDelete(Lst* l, int d){
    Lst* ant = NULL; // Aponta pro anterior.
    Lst* p = l; // Aponta pra percorrer a lista.

    // Verificação se existe esse elemento.
    while(p != NULL && p-> info != d){
        ant = p;
        p = p-> next;
    }
    // Verifica se achou elemento
    if(p == NULL){
        return l; // Caso não ache, retorna a lista.
    }
    // Retira elemento. 
    if(ant == NULL){
        // Retira do início.
        l = p->next;
    }
    else{
        // Retira elemento do meio da lista.
        ant-> next = p->next;
    }
    free(p);
    return l;
}
int main(){
    setlocale(LC_ALL,"");
    int opc;
    
    Lst* l; // Declara a lista vazia,
    l = lstCreate(); // Inicia a lista vazia.
    
    do{
        printf("\nInsira a opção adequada para o que deseja: \n");
        printf("[1] Para inserir na lista.\n[2] Para exibir a lista.\n[3] Para buscar um elemento.\n[4] Para Excluir um elemento.\n[0] Para finalizar a lista.\n");
        printf("Opção desejada: ");
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
            case 3:
                int s;
                printf("Insira o num: ");
                scanf("%d", &s);
                l = lstSearch(l,s);
            break;
            case 4:
                int d;
                printf("Insira o num: ");
                scanf("%d", &d);
                l = lstDelete(l,d);
            break;
            case 0:
                lstFree(l);
                printf ("Lista finalizada com sucesso!\n");
            break;
            default:
                printf("Opc não consta. \n");
            break;


            system("clear");
            system("cls");
        }
    }while(opc != 0);
    return 0;
}
