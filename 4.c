#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 101

typedef struct{
    char nome[31];
    char endereco[51];
    char matricula[11];
    char curso[31];

}tAluno;

tAluno gAluno[MAX];

unsigned int consultaAlunosPorCurso(char *curso)
{
    int tam;
    int i,j;

    for (i=0;i<=tam;i++){
        for(j=i+1;j<tam;j++)
        {
            if(curso[j]==curso[i])
            {
                printf("alunos de computacao : %d\n",i);
                printf("alunos de fisica: %d\n",j);
            }
        }
    }
}
int main()
{
    char nome[31];
    int *curso[31];



    return 0;
}
