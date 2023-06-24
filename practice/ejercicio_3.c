/*
  3. Hacer una función que diga si en una cadena hay sólo dígitos
*/

#include <stdio.h>
#include <string.h>

int main() {
  char cadena[100];
  int i, cont = 0;

  printf("Digite una cadena: ");
  gets(cadena);

  for (i = 0; i < strlen(cadena); i++) {
    if (cadena[i] >= '0' && cadena[i] <= '9') {
      cont++;
    }
  }
  
  if (cont == strlen(cadena)) {
    printf("La cadena de caracteres solo posee digitos \"%s\"", cadena);
  } else if (cont > 0) {
    printf("La cadena de caracteres posee \"%d\" digitos", cont);
  } else {
    printf("La cadena de caracteres no posee digitos");
  }

  return 0;
}
