#include <stdio.h>

void somaprod(int valor1, int valor2, int *somaP, int *produtoP){
    
    int soma = valor1 + valor2;
    int produto = valor1 * valor2;
    *somaP = soma;
    *produtoP = produto;

}

int main(){
    /*
    int x = 2;
    int *pt = &x;

    printf("x = %d\n", x);
    printf("pt = %d\n", pt);  
    printf("*pt = %d\n", *pt);  
    */

    int valor1,valor2,soma,produto;
    printf("Insira valores: ");
    scanf("%d %d", &valor1,&valor2);
    printf("valor1 = %d | | valor2 = %d \n",valor1, valor2);
    somaprod(valor1, valor2,&soma,&produto);
    printf("Soma = { %d } | | Produto = { %d }",soma,produto); 
}

