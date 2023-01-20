/******************************************************************************

Ler um vetor V de 10 elementos. Criar um vetor I, com todos os elementos de V na
ordem inversa, ou seja, o último elemento passará a ser o primeiro, o penúltimo será o
segundo e assim por diante. Escrever todo o vetor V e todo o vetor I.
→ Um For para receber os dados e outro para imprimir.

*******************************************************************************/
#include <stdio.h>
#define TAM 10
int main()
{
    
    int V[TAM];
    int I[TAM];
    
    for (int i = 0; i < TAM; i++){
        V[i] = i;
        I[TAM -1-i] = V[i];
    }
    
    for( int i = 0; i< TAM; i++){
        printf("\n| V: %d | I: %d |", V[i], I[i]);
    }
    printf("\n");
    

    return 0;
}

