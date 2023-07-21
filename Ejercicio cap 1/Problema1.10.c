#include <stdio.h>

/* Area del triangulo
El programa, al recibir los tres lados de un triangulo, calcula su area.

LA1, LA2, LA3, AUX y ARE: variables de tipo real. */

int main (void)
{

float LA1, LA2, LA3, AUX, ARE;

printf("Ingrese los lados del triángulo: ");
scanf("%f %f %f", &LA2, &LA3);
AUX = (LA1 + LA2 + LA3) /2;
ARE = sqrt (AUX * (AUX - LA1) * (AUX - LA3 ));
printf("\nEl area del triangulo es: %6.2f", ARE);
return 0;
}





