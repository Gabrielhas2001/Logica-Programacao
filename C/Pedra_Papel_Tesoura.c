#include <stdio.h>
#include <stdlib.h>

int main()
{
    char player1[256];
    char player2[256];

    printf("Player1: Pedra, Papel ou Tesoura?\n");
    scanf("%s", &player1);

    printf("Player2: Pedra, papel ou Tesoura?\n");
    scanf("%s", &player2);

    printf("O player 1 jogou: %s\nO Player 2 jogou: %s\n", player1, player2);

    if (strcmp(player1, "Papel") == 0)
    {
        if (strcmp(player2, "Tesoura") == 0)
        {
            printf("Player 2 Venceu essa rodada");
        }
        else if (strcmp(player2, "Pedra") == 0)
        {
            printf("Player 1 Venceu essa rodada");
        }
        else
        {
            printf("A Rodada terminou empatada");
        }
    }
    else if (strcmp(player1, "Tesoura") == 0)
    {
        if (strcmp(player2, "Papel") == 0)
        {
            printf("O player 1 Venceu essa rodada");
        }
        else if (strcmp(player2, "Pedra") == 0)
        {
            printf("O player 2 Venceu essa rodada");
        }
        else
        {
            printf("A rodada acabou empatada");
        }
    }
    else if (strcmp(player1, "Pedra") == 0)
    {
        if (strcmp(player2, "Papel"))
        {
            printf("O Player 2 Venceu essa rodada");
        }
        else if (player2, "Tesoura")
        {
            printf("O Player 1 Venceu essa rodada");
        }
        else
        {
            printf("A Rodada terminou empatada");
        }
    }
    else
    {
        printf("Escolha uma opção possivel");
    }
    return 0;
}