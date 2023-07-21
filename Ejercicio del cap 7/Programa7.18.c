#include <stdio.h>

/* Cadena invertida resulta en forma recursiva. */

int inverso(char *);   /* Prototipo de funcion. */

int main(void)
{
char fra[50];
printf("\nIngrese la linea de texto: ");
gets(fra);
printf("\nEscribe la linea de texto en forma inversa: ");
inverso(fra);
}

int inverso(char *cadena)
/* La funcion inverso detiene precisamente el inverso de la cadena. La solucion presentada es simple, pero para comprenderla es necesario tener conocimiento tanto de pilas de recursividad. Observa que mientras no se encuentre el caracter de terminacion de la cadena, se llama a la funcion recursiva con el apuntador al siguiente carcter de la cadena. Por otra parte, queda pendiente de ejecutar 
-almacenado en una pila- el carcter al cual apunta *cadena. */
{
if (cadena[0]!= '\0')
{
  inverso(&cadena[1]);
  putchar(cadena[0]);
}
}









 
