#include <stdio.h>

typedef struct ficha_aluno
{
    char nome[50];
    char materia[50];
    float p1;
    float p2;
   // float media;
    float vs;
}ficha;


void cadastro(ficha aluno[])
{
    for(int pos=0; pos<2; pos++)
    {
    printf("\nNome: ");
    fflush(stdin);
    fgets(aluno[pos].nome, 50, stdin);

    printf("\nDisciplina: ");
    fflush(stdin);
    fgets(aluno[pos].materia, 50, stdin);

    printf("\nP1: ");
    scanf("%f", &aluno[pos].p1);
            if(aluno[pos].p1<0 && aluno[pos].p1>10)
        {
            printf("\n Valor incorreto de p1, insira novamente: ");
            printf("\nP1: ");
            scanf("%f", &aluno[pos].p1);
        }
    //verifica(token);
 
    printf("\nP2: ");
    scanf("%f", &aluno[pos].p2);
            if(aluno[pos].p2<0 && aluno[pos].p2>10)
        {
            printf("\n Valor incorreto de p2, insira novamente: ");
                printf("\nP2: ");
                scanf("%f", &aluno[pos].p2);
        }
    //verifica(token);

    //media = (aluno[pos].p1 + aluno[pos].p2)/2;
    }       
}

void show(ficha aluno[])
{
    for(int pos=0; pos<2; pos++)
    {
        printf("\nNome: %s", aluno[pos].nome);
        printf("\nMateria: %s", aluno[pos].materia);
        printf("\nP1: %f", aluno[pos].p1);
        printf("\nP2: %f", aluno[pos].p2);     
    }        
}



int main()
{
    ficha token[2];
    printf("\nCadastro iniciado. ");
    cadastro(token);
    show(token);
    return 0;
}