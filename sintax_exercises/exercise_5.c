#include <stdio.h>

int main() {
  /*
    Variables en C

    Las variables son contenedores para almacenar valores de datos, como números y caractéres.

    En C, hay diferentes tipos de variables(definidas por diferentes palabras clave), por ejemplo:

      * int - almacena enteros (números enteros), sin decimales, como 123 o -123
      * float - almacena números de coma flotante o decimales, como 19.99 0 -19.99
      * char - almacena caracteres individuales, como 'a' o 'B'. Los valores de char están entre comillas simples
  */

  /*
    Declaración (Crear) variables

    Para crear una variable en C, especifique el tipo y asígnele un valor:

      * sintaxis

      tipo nombreVariable = valor;

      Donde tipo es uno de los tipos de variables de C (Como int) y nombreVariable es el nombre de la variable (como x miNombre). El signo igual se utiliza para asignar un valor de una variable.
  */

  // crear una variable que almacene un número entero

  // int miNumero = 15;

  /*
    También puede asignar una variable sin asignar el valor y colocarselo más tarde
  */

  // Declaración de la variable
  // int myNum;

  // Asignamos el valor de la variable
  // myNum = 15;

  /*
  si intentamos imprimir una variable en C no va a ocurrir nada si no le damos el formato específico
  */

  // int myNum = 15;
  // printf(myNum); // nada va a ocurrir.

  /*
    para imprimir o hacer uso de variables en C debemos familiarizarnos con los "especificadores de formato"
  */

  // Especificadores de formato

  /*
    Los especificadores de formato se usan junto con la funciònn printf() para decirle al compilador que tipo de datos está almacenando la variable

    Un especificador de formato comienza con un signo de %, seguido de un caracter.

    Por ejemplo, para generar el valor de una variable int, debe usar el especificador de formato %d o %i y estar entre comillas dobles, dentro de la función printf()
  */

  /* int miNumero = 20;
  printf("%d", miNumero); //la salida es 20
  */

  // Para imprimir otros tipos, use %c para char y %f para float

  /* // decimal o de coma flotante
  float miNumeroDecimal = 9.33;

  // para un caracter
  char miLetra = 'N';

  // impresión de variables
  printf("%f\n", miNumeroDecimal);
  printf("%c\n", miLetra); */

  /*
    Para combinar texto y una variable, separelos con una coma dentro de la funciònn printf
  */

  /* int miNumero = 50;

  printf("Mi numero favorito es el: %d", miNumero); */

  /*
    Para imprimir diferentes tipos de variables en un solo printf() se puede hacer lo siguiente:
  */

  /* int miNumero = 30;
  char miLetra = 'L';

  printf("Mi numero es %d y mi letra es la %c", miNumero, miLetra); */

  // Cambiar valores de variables

  /*
    Si asignamos un nuevo valor a una variable existente, sobreescribiremos el valor anterior
  */

  /* int miNumero = 19;
  miNumero = 91;

  printf("%d", miNumero); */

  /*
    Tambien podemos asignar el valor de una variable a otra
  */

  /* int miNumero = 57;

  int miOtroNumero = 14; */

  // Asignamos el valor de miOtroNumero (14) a miNumero
  // miNumero = miOtroNumero;

  // miNumero es ahora el 14, en lugar del 57
  // printf("%d", miNumero);

  //Tambien podemos asignarle valores a variables vacías

  // Creamos una variable y le asignamos el valor de 57
  /* int miNumero = 57;

  // Declaramos una variable sin valor
  int miOtroNumero;

  // Asignamos el valor de miNumero a miOtroNumero
  miOtroNumero = miNumero;

  // miOtroNumero ahora tiene como valor 57
  printf("%d", miOtroNumero); */

  // Sumar valores de Variables

  int x = 8;
  int y = 15;
  int suma = x + y;
  printf("%d", suma);

  return 0;
}
