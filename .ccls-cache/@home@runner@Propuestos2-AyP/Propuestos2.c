#include <stdio.h>

// Implementar la función repite(n) que imprima n veces n, n-1 veces n-1, ...,
// 2 veces 2, y 1 vez 1.
void repite(int n) {
  for (int i = n; i >= 1; i--) {  // Iteramos desde n hasta 1
    for (int j = 0; j < i; j++) { // Iteramos i veces
      printf("%d ", i);           // Imprimimos i
    }
    printf("\n"); // Imprimimos un salto de línea para separar las filas
  }
}

// Implementar una función que reciba un entero positivo, y retorne el mayor de
// sus dígitos.
int mayorDig(int n) {
  int mayorActual = 0;         // Inicializamos el mayor actual en cero
  while (n > 0) {              // Mientras el número sea mayor a cero
    int digitoActual = n % 10; // Obtenemos el último dígito del número
    if (digitoActual > mayorActual) { // Si el dígito actual es mayor que el
                                      // mayor registrado hasta ahora
      mayorActual = digitoActual; // Actualizamos el mayor actual con el valor
                                  // del dígito actual
    }
    n = n / 10; // Dividimos el número por 10 para pasar al siguiente dígito
  }
  return mayorActual; // Devolvemos el mayor de los dígitos encontrados
}

// Implementar una función que reciba un número entero positivo n y en n líneas
// dibuje 1 asterisco, 2 asteriscos, ..., hasta n asteriscos. Luego, otra
// función que en n líneas dibuje n asteriscos, n-1 asteriscos, ..., hasta 1
// asterisco.
void asteriscos(int n) {
  for (int i = 1; i <= n; i++) {   // Recorre desde 1 hasta n
    for (int j = 1; j <= i; j++) { // Dibuja i asteriscos
      printf("*");
    }
    printf("\n"); // Salta de línea para la siguiente fila
  }
}
// Función que imprime una secuencia de asteriscos en orden decreciente
// desde n asteriscos en la primera línea hasta 1 asterisco en la n-ésima línea
void asteriscosInv(int n) {
  for (int i = n; i >= 1; i--) {  // Recorre desde n hasta 1
    for (int j = 0; j < i; j++) { // Dibuja i asteriscos
      printf("*");
    }
    printf("\n"); // Salta de línea para la siguiente fila
  }
}

// Implementar una función que imprima la tabla de multiplicar de un número
// entero positivo k menor que 100, desde 1 hasta otro entero positivo n. Por
// ejemplo, si k=9 y n=15, se debe imprimir, 9*1 = 9, 9*2 = 18, 9*3 = 27, ...,
// 9*15 = 135.
void tablaMult(int k, int n) {
  for (int i = 1; i <= n;
       i++) { // Ciclo for para recorrer los valores desde 1 hasta n
    printf("%d * %d = %d\n", k, i,
           (k * i)); // Imprime la operación y su resultado
  }
}

int main(void) {
  // repite(3);
  // printf("%d",mayorDig(2839345));
  // asteriscos(3);
  // asteriscosInv(3);
  // tablaMult(9, 15);
  return 0;
}