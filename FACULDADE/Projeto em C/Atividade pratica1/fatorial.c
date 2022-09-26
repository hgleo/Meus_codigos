#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int fatorialRecursivo(int numero){

    if(numero==0) return 1;
    if(numero==1) return numero*fatorialRecursivo(numero-1);
}

int fatorial(int numero){

    printf("Numero: %d\n",numero);
    int fat=1;
    while (numero != 0) {
        fat *= numero;
        numero--;
    }

    printf("Fat = %d\n",fat);
    return fat;
}

int main(int numero, int fat){

    setlocale(LC_ALL, " ");
    printf("Bem vindo ao Fatoriando...\n");
    printf("Insira um numero para ser transcrito para seu fatorial: ");
    scanf("%d", &numero);
    printf("\nResultado de %d! eh: %d", numero,fatorial(numero));

    return 0;
}