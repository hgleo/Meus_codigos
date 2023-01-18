#include <stdio.h>
#include <math.h>

#define pi 3.1415


int main (){

    float areaCirculo, areaRetangulo, raio,largura,comprimento, menorlado;

    printf("\nDigite o valor do raio: ");
    scanf("%f",&raio);

    printf("\nDigite o valor do largura: ");
    scanf("%f",&largura);

    printf("\nDigite o valor do comprimento: ");
    scanf("%f",&comprimento);

    areaCirculo = pi * pow(raio,2);
    areaRetangulo = largura*comprimento;

    printf("\nA área do círculo é %f", areaCirculo);

    if(largura == comprimento){
        printf("\nÉ um quadrado.");
        printf("\nA área do quadrado é %f", areaRetangulo);
        if(largura >= 2*raio){
            printf("\nO círculo cabe dentro do quadrado. ");
        }
        else{
            printf("\nO círculo não cabe dentro do quadrado.");
        }
    }
    else{
        printf("\nÉ um retângulo.");
        printf("\nA área do retângulo é %f", areaRetangulo);

        if(largura > comprimento){
            menorlado = largura;
        }
        else{
        menorlado = comprimento;
        }
        
        if(raio <= menorlado){
            printf("\nO círculo cabe dentro do retângulo. ");
        }
        else(raio > menorlado){
            printf("\nO círculo não cabe dentro do retângulo. ");
        }
    }
    
    
    
    return 0;
}