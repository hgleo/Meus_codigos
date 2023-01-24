/*

1. Implemente a função calculaCirculo, a qual calcula a área e a circunferência de um círculo de
raio r. Essa função deve obedecer o protótipo:
void calculaCirculo(float r, float * circunferencia, float * area);
Fórmulas:
A = π r^2;
c = 2 π r;
π = 3.14159265;

Note que essa passagem dos 2 últimos parâmetros é uma passagem por referência.
Tá fácil? Então faça uma “calculaQuadrilátero” também!

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

void calculaCirculo(float r, float *circunferencia, float *area){
    *area = PI*pow(r,2);
    *circunferencia = 2*PI*r;

    printf("\nA area do circulo: %.2f | E sua circunferencia: %.2f ", *area, *circunferencia);
}
void main(){
    
    float r;
    float area ,circunferencia;


    printf("\nDigite o valor do raio: ");
    scanf("%f", &r);
    calculaCirculo(r, &circunferencia, &area);
    

}