#include <stdio.h>
#include <stdlib.h>

/*
Implemente uma função para cada uma das seguintes tarefas.
Os parâmetros das funções estão descritos sobre uma ótica do usuário e não com o
protótipo exato que será implementado. É permitido utilizar uma lista de parâmetros diferente
da que foi informada.
Obs1: Espaço alocado é o quanto de memória você reservou para o vetor e tamanho é o
total de dados que o usuário informou.
Obs2: O vetor é uma variável local da main
0) MENU: Crie um Menu recursivo que pergunta ao usuário o que ele quer fazer. Este
MENU não pode ter estrutura de repetição;
1) INSERIR(x): insere um elemento x no final do vetor. Caso o vetor esteja cheio realoque
o dobro do número de espaço reservado atualmente. Caso o vetor não tenha sido criado ainda,
crie um com tamanho 1.
2) CONSULTAR TAMANHO: informa a quantidade de dados do vetor
3) CONSULTAR ESPAÇO ALOCADO: Informa qual o espaço de memória reservado para
o vetor
4) IMPRIMIR_VETOR: imprime todos os elementos do vetor
*/

void show(int* V, int tam){

    printf("V =");
    for(int i=0; i<tam; i++){
        printf(" %d",V[i]);
    }
    printf("\n");
}

void put(int **V, int *tam, int *alocado, int x){


    if(*V==NULL){
        *V=(int*)malloc(1*sizeof(int));
        (*V)[*tam]=x;
        *tam=1;
        *alocado=1;
        return;
    }
    if(*tam<*alocado){
        (*V)[*tam]=x;
        (*tam)++;
    }else{
        *V=(int*)realloc(*V,2*(*tam)*sizeof(int));
        (*V)[*tam]=x;
        (*tam)++;        
        (*alocado)*=2;
    }
}
void whichTam(int *V, int *tam){

    if (*V==NULL){
        *tam = 0;
    }
    printf("\n tam: %d\n",*tam);
}

void menu(int **V, int *tam, int *alocado){
    int op,x;

    printf("Escolha uma opcao:\n");
    printf("   0 - Encerrar\n");
    printf("   1 - Inserir\n");
    printf("   2 - Tamanho\n");
    printf("   3 - Imprimir\n");
    scanf("%d",&op);
    switch(op){
        case 0:
            return;
        case 1:
            printf("Digite um numero para inserir: ");
            scanf("%d",&x);
            put(V,tam,alocado,x);
            break;
        case 2:
            whichTam(*V,*tam);
            break;
        case 3:
            show(*V, *tam);
            break;
    }
    menu(V,tam,alocado);

}


int main(){

    int alocado=0, tam=0;
    int* V=NULL;

    menu(&V,&tam,&alocado);


return 0;
}