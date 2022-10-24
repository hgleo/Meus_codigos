// Enuciate 

// Escolha um algoritmos de ordenação Alg dentre: Bolha, Inserção ou Seleção. Escolhi Bubble
 
// Implemente 4 algoritmos de ordenação: 
// (i) o algoritmo Alg na versão iterativa; 
// (ii) o algoritmo Alg na versão recursiva; 
// (iii) mergesort;
// (iv) quicksort.


// Iniciando com n = 1000, gere 3 vetores aleatórios de tamanho n e execute cada um dos algoritmos medindo o tempo de execução. Some os tempos e divida por 3 para obter o tempo médio gasto por cada método. Faça o mesmo para n = 10.000, 100.000, 1.000.000 e 10.000.000.

// Elabore uma tabela com os resultados.

// Compare e analise o resultado de cada um dos pares de algoritmos abaixo:

// a) Alg iterativo X  Alg recursivo
// b) Mergsort X Quicksort
// c) A versão mais rápida de alg X o mais lento dentre Mergesort e Quicksort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void AleatorioVet(){

    
}

int methodBubble(){

   	int memoria, troca, i, j;
	troca=1; /*A variável "troca" será a verificação da troca em cada passada*/
	for(j=tamanho-1; (j>=1) && (troca==1); j--){
		troca=0; /*Se o valor continuar 0 na próxima passada quer dizer que não houve troca e a função é encerrada.*/
		for(i=0; i<j; i++){
				if(vetor[i]>vetor[i+1]){
					memoria=vetor[i];
					vetor[i]=vetor[i+1];
					vetor[i+1]=memoria;
					troca=1; /*Se houve troca, "troca" recebe 1 para continuar rodando.*/
			}
		}
	} 
}

int main(){


    return 0;
}