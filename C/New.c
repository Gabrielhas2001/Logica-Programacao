#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    char sobrenome[256];

    int ano_nascimento;
    int idade;

    printf("Qual seu nome?\n");
    scanf("%s", nome);

    printf("\nExcelente %s, seja bem vindo... Qual a sua idade?\n", nome);
    scanf("%d", &idade);
    printf("\n%s tem %d anos\n", nome, idade);
    printf("Qual ano voce nasceu e qual o seu sobrenome\n");
    scanf("%d\n", &ano_nascimento);
    scanf("%s", sobrenome);
    printf("Seu nome e %s %s, Voce tem %d anos e nasceu em %d", nome, sobrenome, idade, ano_nascimento);

    return 0;
}