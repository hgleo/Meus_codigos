#include <stdio.h>

void produtorioEsomatorio(int quantidadeNumeros,int *somatorio,int *produtorio){
    int soma;
    int prod;
    int V[999];
    *somatorio = soma;
    *produtorio = prod;
    int *pt = V;
    for (int i = 1; i <= quantidadeNumeros; i++){
        V[i] = i;
    }
    for (int i = 1; i <= quantidadeNumeros; i++){
        printf("V[%d", V[*pt+i]);
    }
        
    for(int i = 1; i <= quantidadeNumeros; i++){
        *somatorio += V[i];
        *produtorio *= V[i];
    }
}

int main(){
    
    int num,somatorio,produtorio;
    scanf("%d",&num);
    produtorioEsomatorio(num,&somatorio,&produtorio);

}