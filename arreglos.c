#include <stdio.h>

/* Considerar la definición typedef int binario[100]; para implementar la función veces(b, n) que
retorne la cantidad de veces que aparece la secuencia 101 en un arreglo binario b de n dígitos
binarios. Por ejemplo, en el arreglo 1 0 1 0 0 1 1 0 1 0 1 0 1 0 0 1 la secuencia 1 0 1
aparece 4 veces. */

typedef int binario[100];

int veces(binario b, int n){
  int i, contador = 0;
  for(i = 0; i < n; i++){
    if(b[i] == 1 && b[i+1] == 0 && b[i+2] == 1){
      contador++;
    }
  }
  return contador;
}

/* Considerar la definición typedef int matriz[10][10]; para implementar la función 
veces(B,n, m) que retorne la cantidad de veces que aparece la secuencia 101, tanto por filas como por columnas, en una matriz matriz B de nxm dígitos binarios. */

typedef int matriz[10][10];

int vecesMatriz(matriz B, int n, int m){

  int i, j, contador = 0;
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      if(B[i][j] == 1 && B[i+1][j] == 0 && B[i+2][j] == 1){
        contador++;
      }
      if(B[i][j] == 1 && B[i][j+1] == 0 && B[i][j+2] == 1){
        contador++;
      }
    }
  }
  return contador;
  
}

int main(void) {

  /*binario b = {1,0,1,0,0,1,1,0,1,0,1};

  printf("%d", veces(b, 11));*/

  matriz B = {{0,1,0,1,0},
              {0,1,0,0,1},
              {0,0,1,0,1},
              {1,1,0,1,0},
              {1,0,0,0,1}};

  printf("%d", vecesMatriz(B, 5, 5));
  

  
  return 0;
}