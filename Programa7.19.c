#include <stdio.h>
#include <string.h>
#include <ctype.h>

int cuentap(char *cad); /* Function prototype. */

int main(void)
{
    int i;
    char fra[50];

    printf("\nIngrese la linea de texto: ");
    fgets(fra, sizeof(fra), stdin);
    strcat(fra, " ");

    i = cuentap(fra);
    printf("\nLa linea de texto tiene %d palabras", i);

    return 0;
}

int cuentap(char *cad)
{
    char *cad0 = "";
    int i = 0;
    cad0 = strstr(cad, " ");

    while (cad0 != NULL)
    {
        strcpy(cad, cad0 + 1);
        i++;
        cad0 = strstr(cad, " ");
    }

    return i;
}


