#include <stdio.h>

/*1.- n terreno rectangular tiene una superficie de 200-3*k metros de largo por
k metros de ancho. Por ejemplo, si k=20, la superficie del terreno es
(200-3*20)*20 = 140*20 = 2800 m2. Se desea valorizar el terreno correspondiente
a la superficie máxima generada con un conjunto de valores de k. Implementar la
función precioMax(p) que retorne el precio del terreno de mayor superficie que
se genera con valores de k desde 20 hasta 40 y un precio de $p el m2.*/

// Esta función recibe un entero p y calcula el precio máximo que se puede
// obtener al vender un terreno rectangular de dimensiones (200 - 3*i) x i,
// donde i varía entre 20 y 40.
int PrecioMax(int p) {
  // Declaramos las variables que se van a utilizar: superficie, superficieMax,
  // k y precioMaxSuper
  int superficie, superficieMax = 0, k = 20, precioMaxSuper;

  // Este ciclo for recorre todos los valores de i desde 20 hasta 40
  for (int i = k; i <= 40; i++) {
    // Se calcula la superficie del terreno con la fórmula dada
    superficie = (200 - 3 * i) * i;

    // Si la superficie calculada es mayor que la mayor superficie encontrada
    // hasta ahora, se actualiza el valor de superficieMax
    if (superficie > superficieMax) {
      superficieMax = superficie;
    }
  }

  // Se calcula el precio máximo de venta del terreno con la superficie máxima
  // encontrada y el precio por metro cuadrado (p)
  precioMaxSuper = superficieMax * p;

  // Se imprime por pantalla la mayor superficie encontrada
  printf("Mayor superficie es: %d\n", superficieMax);

  // Se retorna el precio máximo de venta del terreno
  return precioMaxSuper;
}

/* 2.- Con la definición typedef int reducido[10] se declaran arreglos de
exactamente 10 valores mayores que cero y menores que 10. Por otra parte, con la
definición typedef int expandido[100] se declaran arreglos de un máximo de 100
valores mayores que -1 y menores que 10. En un arreglo reducido r, r[i]
determina la repetición de r[i] veces i en el arreglo expandido e. Implementar
la función expandir(r, e) que a partir de un arreglo reducido r genere el
respectivo arreglo expandido e y, además, retorne la cantidad de elementos de e.
Por ejemplo, con r = {4, 2, 5, 1, 2, 4, 3, 1, 6, 3} la función debe generar e =
{0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6, 7, 8, 8, 8, 8,
8, 8, 9, 9, 9} y retornar 31.*/

typedef int
    reducido[10]; // Definición del tipo de arreglo reducido con 10 elementos
typedef int expandido[100]; // Definición del tipo de arreglo expandido con 100
                            // elementos

int expandir(reducido r, expandido e) {
  int k = 0; // Inicializar variable para llevar la cuenta del índice del
             // arreglo expandido
  for (int i = 0; i < 10;
       i++) { // Iterar sobre los elementos del arreglo reducido
    for (int j = 0; j < r[i];
         j++) { // Iterar r[i] veces para agregar i al arreglo expandido
      e[k] = i; // Agregar i al arreglo expandido en el índice k
      k++; // Incrementar k para el siguiente elemento del arreglo expandido
    }
  }
  return k; // Retornar la cantidad de elementos del arreglo expandido
}

/* 3.- Usar la definición typedef int matriz[10][10]; para implementar la
función desplazar(B, n, m) que desplace una posición todos los elementos de una
matriz B, de n filas por m columnas, de la siguiente forma: los elementos de
cada fila se desplazan una posición a la izquierda y el primero de cada fila
pasa a ser el último de la fila anterior, excepto el primero de la primera fila
que pasa a ser el último de la última fila.

     [0] [1] [2] [3] [4]                   [0] [1] [2] [3] [4]
[0]  18  30  39  46  57               [0]  30  39  46  57   35
[1]  35  53  65  79  86      -->      [1]  53  65  79  86   49
[2]  49  70  81  93  101              [2]  70  81  93  101  58
[3]  58  76  87  99  112              [3]  76  87  99  112  18
*/

//0,0 -> 3,4 ; 1,0 -> 0,4 ; 2,0 -> 1,4; 3,0 -> 2,4

typedef int matriz[10][10];

void desplazar(matriz B, int n, int m) {
  int i, j, aux = B[0][0];
  for (i = 0; i < n; i++) {
    for (j = 1; j < m; j++) {
      B[i][j - 1] = B[i][j];
    }
    /*if(i<n-1)
      B[i][j-1] = B[i+1][0];
    else
      B[i][j-1] = aux;*/
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }
}

int main(void) {

  /*  reducido r = {4, 2, 5, 1, 2, 4, 3, 1, 6, 3};
    expandido e = {0};

    int cantidad = expandir(r, e);

    for (int i = 0; i < cantidad; i++) {
        printf("%d ", e[i]);
    }
    printf("\nCantidad de elementos en e: %d\n", cantidad);*/

  matriz B = {{18, 30, 39, 46, 57},
              {35, 53, 65, 79, 86},
              {49, 70, 81, 93, 101},
              {58, 76, 87, 99, 112}};

  desplazar(B, 4, 5);

  return 0;
}