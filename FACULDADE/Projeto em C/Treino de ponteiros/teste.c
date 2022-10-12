#include <stdlib.h>
#include <stdio.h>

int main(){

    int x = 2;
    int *y = &x;
    int **z = &y;

    printf("x: %ld - o que y aponta: %ld - o que aponta o que z aponta:%ld\n\n",x,*y,**z);
    printf("x: %ld - o que y vale: %ld ( aqui eh a posicao de memoria do x, que eh o valor de y) - o que z aponta%ld (aqui z aponta para y, entao é a posicao de memoria de y)\n\n",x,y,*z);

    return 0;
}