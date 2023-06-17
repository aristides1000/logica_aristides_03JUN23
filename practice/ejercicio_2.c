/*
  2. Hacer una función que diga si un caracter está en una cadena de caractéres.
*/

#include <stdio.h>
#include <string.h>

int main() {
  char cadena[100], caracter;
  int count = 0;

  printf("Digite una cadena de caracteres: "); 
  gets(cadena);
  printf("Digite un caracter: ");
  scanf("%c", &caracter);

  for(int i = 0; i < strlen(cadena); i++) {
    if (cadena[i] == caracter) {
      count++;
    }
  }

  if (count > 0) {
    printf("La cadena de caracteres \"%s\" posee el caracter \"%c\" y se repite %d veces", cadena, caracter, count);
  } else {
    printf("La cadena de caracteres \"%s\" no posee el caracter \"%c\"", cadena, caracter);
  }
}
