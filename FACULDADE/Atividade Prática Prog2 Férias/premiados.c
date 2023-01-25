/*

Todo ano um concurso de programação premia os participantes que obtêm a maior média
ponderada em uma bateria de dois testes. Escreva uma função que recebe sete parâmetros: 
● o inteiro n indicando a quantidade de participantes do concurso ok 
● o ponteiro inscr para o vetor de inteiros que contém as inscrições desses participantes, ok
● ponteiro t1 para o vetor de reais que contém a nota de cada participante no primeiro teste, ok
● o inteiro p1 que indica o peso dessa nota na média ponderada, ok
● o ponteiro t2 para o vetor de reais que contém a nota de cada participante no segundo teste, 
● o inteiro p2 que indica o peso dessa nota na média ponderada, 
● e um ponteiro para  a variável inteira tam.

 A função deve:
● calcular a média ponderada de cada participante;
● criar um novo vetor de inteiros alocado dinamicamente com o tamanho exato para conter
apenas as inscrições dos participantes que obtiveram a maior média (pode haver empate);
● armazenar no novo vetor as inscrições correspondentes (em qualquer ordem);
● armazenar o tamanho do novo vetor na variável tam; e
● retornar o ponteiro para o novo vetor.
Considere que para uma mesma posição do vetor (mesmo índice), a inscrição e as notas se
referem a um mesmo participante. O protótipo da função é:
i
int *premiados(int n, int *inscr, float *t1, int p1,float *t2, int p2, int *tam);

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam) {
    float max_media = -1; // inicializa com valor menor possível
    int *inscr_premiados = NULL; // cria vetor vazio
    int cont = 0; // contador para o tamanho do vetor inscr_premiados
    
    // loop para calcular a média ponderada e verificar se é a maior
    for (int i = 0; i < n; i++) {
        float media = (t1[i] * p1 + t2[i] * p2) / (p1 + p2); // calcula a média ponderada
        if (media > max_media) { // verifica se é a maior
            max_media = media; // atualiza a maior média
            cont = 1; // reinicia o contador
            if (inscr_premiados) free(inscr_premiados); // libera memória alocada anteriormente
            inscr_premiados = (int *)malloc(sizeof(int)); // aloca memória para um inteiro
            inscr_premiados[0] = inscr[i]; // armazena a inscrição do participante
        } else if (media == max_media) { // verifica se é igual à maior
            cont++; // incrementa o contador
            inscr_premiados = (int *)realloc(inscr_premiados, cont * sizeof(int)); // aloca mais memória
            inscr_premiados[cont-1] = inscr[i]; // armazena a inscrição do participante
        }
    }
    *tam = cont; // armazena o tamanho do vetor inscr_premiados
    return inscr_premiados; // retorna o ponteiro para o vetor inscr_premiados
}



int main() {
    int n;
    printf("Número dos participantes: ");
    scanf("%d", &n);
    int inscr[n];
    float t1[n], t2[n];
    int p1, p2, tam;

    // loop para ler as informações dos participantes
    for (int i = 0; i < n; i++) {
        printf("Digite o número de inscrição do participante %d: ", i+1);
        scanf("%d", &inscr[i]);
        printf("Digite a nota do participante %d na P1: ", i+1);
        scanf("%f", &t1[i]);
        printf("Digite a nota do participante %d na P1: ", i+1);
        scanf("%f", &t2[i]);
    }
    printf("Digite o peso da P1: ");
    scanf("%d", &p1);
    printf("Digite o peso da P2: ");
    scanf("%d", &p2);

    for(int i = 0; i < n; i++){
        printf("Participante de inscrição %.2d: Notas: %.2f | %.2f\n",i+1,t1[i],t2[i]);
    }

    int *inscr_premiados = premiados(n, &inscr, &t1, p1, &t2, p2, &tam);
    printf("\nAs inscrições vencedoras são: ");
    for (int i = 0; i < tam; i++) {
        printf("%d \n", inscr_premiados[i]);
    }
    printf("\n");
    free(inscr_premiados);
    return 0;
}
