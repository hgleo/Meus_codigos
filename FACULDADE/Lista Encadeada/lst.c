#include <stdio.h>
#include "lst_encad.c"

int main(){


    Lista* l; // Declara a lista vazia,
    l = lstCria(); // Inicia a lista vazia.
    l = lstInsere(l,10);
    l = lstInsere(l,20);
    l = lstInsere(l,30);
    lstPrint(l);
    l = lstRetira(l,11);
    l = lstRetira(l,20);
    lstPrint(l);
    lstLibera(l);
    return 0;
}