// Enuciate 

// Escolha um algoritmos de ordenação Alg dentre: Bolha, Inserção ou Seleção. Escolhi Bubble
 
// Implemente 4 algoritmos de ordenação: 
// (i) o algoritmo Alg na versão iterativa;     ok
// (ii) o algoritmo Alg na versão recursiva;    ok
// (iii) mergesort;                             ok
// (iv) quicksort.                              ok


// Iniciando com n = 1000, gere 3 vetores aleatórios de tam n e execute cada um dos algoritmos medindo o tempo de execução. Some os tempos e divida por 3 para obter o tempo médio gasto por cada método. Faça o mesmo para n = 10.000, 100.000, 1.000.000 e 10.000.000.

// Elabore uma tabela com os resultados.

// Compare e analise o resultado de cada um dos pares de algoritmos abaixo:

// a) Alg iterativo X  Alg recursivo
// b) Mergsort X Quicksort
// c) A versão mais rápida de alg X o mais lento dentre Mergesort e Quicksort


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show (int *V, int N) {
    int i;
    printf("V [");
    for (i=0; i<N; i++)
        printf("%3d ", V[i]);
    printf("] \n");
}

void BubbleSort (int V[], int N) {
    int i, j, aux;
    for (i=0; i<N; i++)
        for (j=0; j<N-i-1; j++)
        if (V[j]>V[j+1]) { 
            aux = V[j]; 
            V[j] = V[j+1];
            V[j+1] = aux; }
}

void BubbleSortRecursiveSwap(int *a, int *b){
    int aux = *a;
            *a = *b;
            *b = aux;
}

void BubbleSortRecursive(int V[],int N){
    if(N==1) return;

    int c=0;
    for(int i=0;i<N-1;i++){
        if(V[i]>V[i+1]){
        BubbleSortRecursiveSwap(&V[i],&V[i+1]);
        c++;
        }
    }

    if(c==0) return;

    BubbleSortRecursive(V,N-1);
}

void merge(int V[], int l, int m, int r){
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int VauxL[n1], VauxR[n2];


	for (i = 0; i < n1; i++)
		VauxL[i] = V[l + i];
	for (j = 0; j < n2; j++)
		VauxR[j] = V[m + 1 + j];


	i = 0; 
	j = 0;
	k = l; 
	while (i < n1 && j < n2) {
		if (VauxL[i] <= VauxR[j]) {
			V[k] = VauxL[i];
			i++;
		}
		else {
			V[k] = VauxR[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		V[k] = VauxL[i];
		i++;
		k++;
	}

	while (j < n2) {
		V[k] = VauxR[j];
		j++;
		k++;
	}
}

void mergeSort(int V[], int l, int r){
	
    if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(V, l, m);
		mergeSort(V, m + 1, r);
		merge(V, l, m, r);
	}
}

void criarvetor(int V[],int N){
    srand(time(NULL));
    for(int i=0; i<N; i++){
        
        V[i]= rand();
    }
}

void realocarVetor(int V,int N){
    V = (int*)realloc(V,N * sizeof(int));
}

void troca(int vet[], int i, int j){
	int aux = vet[i];
	vet[i] = vet[j];
	vet[j] = aux;
}


int particiona(int vet[], int inicio, int fim){
	int pivo, pivo_indice, i;
	
	pivo = vet[fim]; // o pivô é sempre o último elemento
	pivo_indice = inicio;
	
	for(i = inicio; i < fim; i++)
	{
		// verifica se o elemento é <= ao pivô
		if(vet[i] <= pivo)
		{
			// realiza a troca
			troca(vet, i, pivo_indice);
			// incrementa o pivo_indice
			pivo_indice++;
		}
	}
	
	// troca o pivô
	troca(vet, pivo_indice, fim);
	
	// retorna o índice do pivô
	return pivo_indice;
}


int particiona_random(int vet[], int inicio, int fim){
	// seleciona um número entre fim (inclusive) e inicio (inclusive)
	int pivo_indice = (rand() % (fim - inicio + 1)) + inicio;
	
	// faz a troca para colocar o pivô no fim
	troca(vet, pivo_indice, fim);
	// chama a particiona
	return particiona(vet, inicio, fim);
}

void quick_sort(int vet[], int inicio, int fim){
	if(inicio < fim)
	{
		// função particionar retorna o índice do pivô
		int pivo_indice = particiona_random(vet, inicio, fim);
		
		// chamadas recursivas quick_sort
		quick_sort(vet, inicio, pivo_indice - 1);
		quick_sort(vet, pivo_indice + 1, fim);
	}
}

int main (){

    clock_t t1;
    int N = 100000;
    int V1[N];
    int *V;

    V = (int*)malloc(N * sizeof(int));

    criarvetor(V,N);
    
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //printf("Bubble Sort Iterativo: \n");
    //printf("Ordenando o Vetor de %d indices.\n",N);
    t1 = clock();
    //printf("Ordenando... \n");
    BubbleSort (V, N);
    t1 = clock() - t1;
    printf("Tempo de execucao de Bubble Sort Iterativo: %fs\n", ((double)t1)/(CLOCKS_PER_SEC));
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    criarvetor(V,N); //ALTERANDO OS VALORES DO VETOR NOVAMENTE

    //printf("Bubble Sort Recursivo:  \n");
    //printf("Ordenando o Vetor de %d indices.\n",N);
    clock_t t2;
    t2 = clock();
    //printf("Ordenando... \n");
    BubbleSortRecursive(V, N);
    t2 = clock() - t2;
    printf("Tempo de execucao de Bubble Sort Recursivo: %fs \n", ((double)t2)/(CLOCKS_PER_SEC));
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //printf("Merge Sort: \n "); 
    //printf("Ordenando o Vetor de %d indices.\n",N);
    clock_t t3;
    t3 = clock();
    //printf("Ordenando... \n");
    mergeSort(V, 0, N - 1);
    printf("Tempo de execucao de Merge Sort: %fs \n", ((double)t3)/(CLOCKS_PER_SEC));
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //printf("Quick Sort: \n "); 
    //printf("Ordenando o Vetor de %d indices.\n",N);
    clock_t t4;
    t4 = clock();
    //printf("Ordenando... \n");
    mergeSort(V, 0, N - 1);
    printf("Tempo de execucao de Quick Sort: %fs \n", ((double)t4)/(CLOCKS_PER_SEC));   
    
}