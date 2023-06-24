/*
  5. Hacer una función que imprima los primeros n números primos
*/

#include <stdio.h>

int main()  {
  int n, x, num = 0;

  printf("ingrese numero de primos que desea imprimir:");
  scanf("%i", &n);

  while(n > 0) {
    num++;
    x = 1;
    int count = 0;

    while (x <= num) {
      if (num % x == 0){
        count++;
      }

      x++;
    }
    if (count == 2) {
      printf("%i,", num);
      n--;
    }
  }

  return 0;
}
