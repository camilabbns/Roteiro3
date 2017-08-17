#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[51];
    int i,j,contador=0;

    printf("Digite uma palavra:\n");
    gets(nome);

    for(i=0;nome[i]!='\0';i++)
    {}
    for(j=0;nome[j]!='\0';j++,i--)
    {
        if(nome[i-1]==nome[j])
        {
            contador++;
        }
    }
    if(strlen(nome)==contador)
    {
        printf("eh palindromo");
    }
    else{
        printf("nao eh palindromo");
    }

    return 0;
}
