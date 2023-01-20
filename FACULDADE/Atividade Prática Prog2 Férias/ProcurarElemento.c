/******************************************************************************

Ler 9 números inteiros para preencher uma matriz D 3x3, ou seja, com 3 linhas e 3
colunas. A seguir, ler um número inteiro X e escrever uma mensagem indicando se o valor
de X existe ou não na matriz D. E, se existir, quantas vezes foi encontrado.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    
    int M[3][3];
    int cont =0;
    
    int valor;

    printf("\nInsira o valor pra ver se existe: ");
    scanf("%d",&valor);
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            M[i][j] = rand()%11;
            if(valor == M[i][j]){
                cont++;
            }
        }
    }

    
    printf("\nQtde de vezes que ele aparece: %d ", cont);
    
    
    return 0;
}

