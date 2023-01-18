#include<stdio.h>

int converterReal(char option, int valor, float *resultado){
    system("clear");
    *resultado = 0;
    if(option == 'E'){
        *resultado = valor * 0.1807828;
    }
    else if(option == 'D'){
        *resultado = valor * 0.1953011;
    }
    system("clear");
}

int converterDolar(char option, int valor, float *resultado){
    *resultado = 0;
    if(option == 'E'){
        *resultado = valor * 0.9256688;
    }
    else if(option == 'R'){
        *resultado = valor * 5.1197;
    }
    system("clear");
}

int converterEuro(char option, int valor, float *resultado){
    *resultado = 0;
    if(option == 'D'){
        *resultado = valor * 1.0803;
    }
    else if(option == 'R'){
        *resultado = valor * 5.5288;
    }

    system("clear");
}

int main(){

    float resultado;
    int valor;
    char option;
    do{
    
        printf("Escolha uma moeda para converter\n[R] = REAL\n[D] = DOLAR\n[E] = EURO\n\n");
        scanf("%s",&option);
        printf("Digite o valor que deseja converter: ");
        scanf("%d", &valor);
        system("clear");
    switch(option){
        case 'E':
            printf("Digite a moeda que voce deseja converter para:\n[D] DOLAR\n[R] REAL\n\n");
            scanf("%s",&option);
            converterEuro(option, valor, &resultado);
            printf("VALOR CONVERTIDO: %f\n", resultado);
        break;
        case 'R':
            printf("Digite a moeda que voce deseja converter para:\n[E] EURO\n[D] DOLAR\n\n");
            scanf("%s",&option);
            converterReal(option, valor, &resultado);
            printf("VALOR CONVERTIDO: %f\n", resultado);
        break;
        case 'D':
            printf("Digite a moeda que voce deseja converter para:\n[E] EURO\n[R] REAL\n\n");
            scanf("%s",&option);
            converterDolar(option, valor, &resultado);
            printf("VALOR CONVERTIDO: %f\n", resultado);
        break;
        default:
            printf("Invalid option\n");
        break;
    }
  }while(option != 'P');

  return 0;
}