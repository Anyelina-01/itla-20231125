#include <stdio.h>
#include <string.h>

void intercambiar(char FRA[][30], int); /* Function prototype. */

int main(void)
{
    int i, n;
    char FRA[20][30];
    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Ingrese la linea de texto numero %d: ", i + 1);
        fflush(stdin);
        fgets(FRA[i], sizeof(FRA[i]), stdin);
    }
    printf("\n\n");
    intercambiar(FRA, n);
    for (i = 0; i < n; i++)
    {
        printf("Impresion de la linea de texto %d: %s", i + 1, FRA[i]);
    }
    return 0;
}

void intercambiar(char FRA[][30], int n)
{
    int i, j;
    j = n - 1;
    char cad[30];
    for (i = 0; i < (n / 2); i++)
    {
        strcpy(cad, FRA[i]);
        strcpy(FRA[i], FRA[j]);
        strcpy(FRA[j], cad);
        j--;
    }
}



