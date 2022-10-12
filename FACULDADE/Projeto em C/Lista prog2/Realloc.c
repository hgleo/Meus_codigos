#include <stdio.h>
#include <stdlib.h>



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