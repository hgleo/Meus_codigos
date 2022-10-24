#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[50];
    int i,c, conta=0;


    fgets(texto, 150, stdin);

    c = strlen(texto);

    printf("Numero de letras = %d", c);

    for(i=0; texto[i] != '\0'; i++){

        if(texto[i]==' ') {

    conta++;
        }

    }printf(" %d",conta+1);


    return 0;
}