#include <stdio.h>

typedef struct ficha
{
    char nome[30];
    char materia[30];
    float p1,p2,media,vs;
}ficha;

struct ficha cad()
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

 
    printf("\nP2: ");
    scanf("%f", &aluno[pos].p2);
            if(aluno[pos].p2<0 && aluno[pos].p2>10)
        {
            printf("\n Valor incorreto de p2, insira novamente: ");
                printf("\nP2: ");
                scanf("%f", &aluno[pos].p2);
        }
    media = (aluno[pos].p1 + aluno[pos].p2)/2;
        if(aluno.media < 6){
        printf("[ATENÇÃO] O aluno deverá ter feito a VS \n");
        printf("Digite a nota da AVS do aluno:\n");
        scanf("%f",&aluno.vs);

        if(aluno.p1<aluno.p2){
            aluno.media=(aluno.p2+aluno.vs)/2;
        }else{
            aluno.media=(aluno.p1+aluno.vs)/2;
        }
    }
    }
    printf("\n Aluno cadastrado: %s", aluno[pos].nome);
    return ficha;
}

void show(struct ficha aluno[])
{
    for(int pos=0; pos<2; pos++)
    {
        printf("\nNome: %s", aluno[pos].nome);
        printf("\nMateria: %s", aluno[pos].materia);
        printf("\nP1: %f", aluno[pos].p1);
        printf("\nP2: %f", aluno[pos].p2);     
    }        
}
