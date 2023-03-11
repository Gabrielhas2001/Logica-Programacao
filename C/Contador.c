#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    int final = 10;

    while (contador <= final)
    {
        printf("%d\n", contador);
        contador++;

        if (contador == final)
        {
            printf("%d\n", contador);
            contador--;
            return;
        }
    }

    return 0;
}