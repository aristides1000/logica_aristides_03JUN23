/*
  1. Hacer una función que diga si un número es primo
*/
#include <stdio.h>

int main() {
  int num;
  int count = 0;

  printf("Ingrese un numero:");
  scanf("%d", &num);

  for (int i = num; i > 0; i--) {
    if (num % i == 0) {
      count++;
    }
  }

  if (count == 2) {
    printf("El numero %d es primo", num);
  } else {
    printf("El numero %d no es primo", num);
  }

  return 0;
}
