#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    int idade;

    printf("Olá, qual o seu nome?\n");
    scanf("%s", nome);
    printf("\n Qual a sua idade?\n");
    scanf("%d", &idade);

    if (idade <= 12)
    {
        printf("\n%s tem %d, então ele ainda é crianca", nome, idade);
    }
    else if (idade <= 18)
    {
        printf("\n%s tem %d anos, entao ele ja e adolescente", nome, idade);
    }
    else
    {
        printf("\n%s tem %d anos, entao ele ja eh adulto", nome, idade);
    }
    return 0;
}