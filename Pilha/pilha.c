#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Criação da Pilha.

struct pilha{
    int topo; // Topo da Pilha.
    int base; // Base da Pilha, usado pra comparações.
    float *pElem; // Usado para  o elemtento.
};


// Cria a pilha.

void createPilha(struct pilha *p, int pos){
    p->topo = -1;
    p-> base = pos;
    p->pElem =(float*)malloc(pos * sizeof(float));
}

// Verificações.

int isEmpty(struct pilha* p){
    if(p->topo == -1) return 1;
    else return 0;
}

int isFull(struct pilha* p){
    if(p->topo == p->base-1) return 1;
    else return 0;
}
// Cria a função que insere valores na pilha.

void push(struct pilha* p, float v){
        p->topo++;
        p->pElem[p->topo] = v;
}

// Cria a função que retira elemento do topo.

float pop(struct pilha* p){
    float aux = p->pElem[p->topo];
    p->topo--;
    return aux;
}

// Cria uma função que retorna o topo. 

float returnTopo(struct pilha* p){
    return p->pElem[p->topo];
    system("pause");
}

// Função principal.

int main(){
    system("clear");
    setlocale(LC_ALL,"");
    struct pilha Pilha;
    // Declaração de Variáveis.
    int tam, opc;
    float num;

    printf("Capacidade da pilha: ");
    scanf("%d", &tam);
    printf("\n");
    
    // Chamada da função.
    createPilha(&Pilha,tam);
    
    // Menu

    do{
        system("clear");
        printf("\n[1] Push\n[2] Pop\n[3] Mostra topo\n[0] Sair\n");
        scanf("%d", &opc);
        switch(opc){
            case 1: 
                if(isFull(&Pilha)==1){
                    printf("Stack Overflow!\n");
                }
                else{
                    printf("Valor a ser inserido: ");
                    scanf("%f", &num);
                    push(&Pilha, num);
                    printf("Valor inserido com sucesso. \n");
                    system("read -p \"Pressione ENTER para sair\" saindo\n");
                }
            break;
            case 2: 
                if(isEmpty(&Pilha)==1){
                    printf("Stack Underflow!\n");
                }
                else{
                   num = pop(&Pilha);
                   printf("Valor: %.2f foi retirado.\n", num); 
                }
            break;
            case 3:
                if(isEmpty(&Pilha)== 1){
                    printf("Stack Underflow!\n");
                }
                else{
                    num = returnTopo(&Pilha);
                    printf("Valor: %.2f\n", num);
                    system("read -p \"Pressione ENTER para sair!\" saindo");
                }
            break;
            case 0:
                return 0;
                free(&Pilha);
            break;
            default:
                printf("Invalid input!\n");
            break;
        }
    }while(opc!=0);
}