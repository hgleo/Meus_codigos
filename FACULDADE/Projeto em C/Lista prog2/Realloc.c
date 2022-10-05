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

void menu(int **V,int &tam,int *alocado){
    //char opcao;
    printf("O que deseja fazer:  |(I)nserir|(T)amanho|(E)spaço|Im(P)imir|(S)air\n");
    scanf("%c", opcao); 

    /* O uso de Switch case foi pq eu acho q fica mais visual o codigo */

    switch(opcao){
        case 'I': Insere(); 
        break;

        case 'T': Tamanho();
        break;

        case 'E': Espaço();
        break;

        case 'P': Imprime();
        break;

        case 'S': return 0;
        break;
    }

    menu(V,tam,alocado);

}

int Insere(int **V, int *tam, int *alocado,int numero){

    if(*V==NULL){
        *V=(int*)malloc(1*sizeof(int));
        (*V)[*tam]=numero;
        *tam=1;
        *alocado=1;
        return menu(V,tam,alocado);
    }
    if(*tam<*alocado){
        V[*tam]= numero;
        (*tam)++;
    }
    else{
        V=(int*)realloc(V,2*(*tam)*sizeof(int));
        V[*tam]=numero;
        (*tam)++;
        (*alocado)*=2;
    }

}



int main(){

    int *v,numero;
    *V=*v;
    v = (int*)malloc(numero*sizeof(int));

    printf("Insira valor pro Vetor: ");
    scanf("%d",&numero);
    //char opcao;
    menu(V,tam,alocado);

    return 0;
}
