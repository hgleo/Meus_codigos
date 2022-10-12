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

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // setlocale.


void mostraVetor(int *V,int tam){

    printf(" Vetor ==> ");
    for (int i=0;i<tam;i++){
        printf(" %d ",V[i]);
}
    printf("\n");
    system("pause");
}

void inserir(int **V, int *tam, int *alocado,int num){
    /* Nesta função compara os espaços alocados e por sua vez, caso se inicie com o vetor vazio, ele adiciona um espaço ao vetor*/

    if(*V==NULL){
     
        (*V)=(int*)malloc(1*sizeof(int));
        (*V)[*tam]=num;
        *tam=1;
        *alocado=1;
        return;
    }

    if(*tam<*alocado){
    
        (*V)[*tam]=num;
        (*tam)++;
    }

    else{
    
        *V=(int*)realloc(*V,2*(*tam)*sizeof(int));
        (*V)[*tam]=num;
        (*tam)++;
        (*alocado)*=2;
    }
}

void queAlocado(int **V, int **alocado){
    
    if(**V == NULL) {
    printf("Tamanho do Espaço Alocado: 0");
    }
    printf("Espaço alocado: %d\n", **alocado);
    system("pause");
}

void queTam(int **V, int **tam){
    
    if(**V == NULL){
    printf("Tamanho do vetor: 0");
    }
    printf("Tamanho do Vetor: %d\n",**tam);
    system("pause");
}

void menu(int **V, int *tam, int *alocado){

    int operador, num;
    printf("Escolha uma opção: (0)Encerra |(1)Insere |(2)Mostra Vetor |(3)Consulta Tamanho|(4)Consulta Espaço alocado. \n");
    scanf("%d", &operador);
    system("cls");
    while (operador != 0){
    
        printf("Escolha uma opção: (0)Encerra |(1)Insere |(2)Mostra Vetor |(3)Consulta Tamanho|(4)Consulta Espaço alocado. \n");
        scanf("%d", &operador);
        system("cls");
    switch(operador){
        case 0: 
            return;
        break;

        case 1: 
            printf("Digite um número para ser inserido no vetor: ");
            scanf("%d", &num);
            system("cls");
            inserir(*V,tam,alocado,num);
        break;

        case 2: 
            mostraVetor(*V,*tam);
        break;

        case 3: 
            queTam(*V,&tam);
        break;

        case 4: 
            queAlocado(*V,&alocado);
        break;
    }
    system("cls");
    }
}

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    int (*V) = NULL;
    int alocado=0, tam = 0;

    menu(&V,&tam,&alocado);

    return 0;
}