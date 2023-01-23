#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* 

    Atividade: Alterar

    No exemplo que separa valores acima da média:
    > Função deve devolver a média para a main para que seja exibida junto aos valores > média.
    > Fazer na main um loop para receber a qtde de valores a serem informados, alocar o espaço para este vetor e receber os valores com scanf.


*/

int *obtemMaioresMedia (int *vet, int tam, int *novoTam, int *media){
    int i,j,ct=0;
    *media=0;
    int *novoVet;

    //calcula a media
    for (i=0; i<tam;i++) 
    *media=*media+vet[i];
	*media=*media/tam;	//tam=i
    //printf("\nA media eh: %.1f\n", media);

    //conta valores acima da media
	for (i=0; i<tam;i++)
		if (vet[i]>*media) ct++;
	*novoTam = ct;

    //aloca novo vetor
	novoVet = (int *) malloc(ct* sizeof(int));

    //preenche com valores acima da media
	//printf("\nValores maior que a media: ");
    for (i=0, j=0; i<tam; i++)
		if (vet[i]>*media) {
			novoVet[j]=vet[i];
			j++;
		}
    // retorna o vetor com valores acima da media
	return novoVet;
}



void main () {
    
    int tamNovo, i;
       
    int vetor [10];
    printf("\nVetor primario: ");
    for(int i = 0; i <  10; i++){
        vetor[i] = rand()%11;
        printf("%d ", vetor[i]);
    }
    int *vetMaioresMedia;

	vetMaioresMedia = obtemMaioresMedia (vetor, 10, &tamNovo);

	for (i=0; i<tamNovo;i++)
		printf(" %d ",vetMaioresMedia[i]);

}
