#include <stdio.h>
#include "practical.h"

int esSumablePor(int num, int array[], int tamaño) {
  for (int i = 0; i < (1 << tamaño); i++) {
      int suma = 0;
      for (int j = 0; j < tamaño; j++) {
          if (i & (1 << j)) {
              suma += array[j];
          }
      }
      if (suma == num) {
          return 1; 
      }
  }
  return 0; 
}

int main() {
  int divisores[MAX_DIVISORES] = {1};
  int anteriores[MAX_ANTERIORES] = {0};
  
  int num;
  int cantidadDivisores;

  printf("\nIntroduzca el numero: ");
  scanf("%d", &num);

  int cantidad = getDivisores(num, divisores, &cantidadDivisores);
  printf("Cantidad de divisores: %d\n", cantidad);

  printf("Divisores de %d:\n", num);
  for (int i = 0; i < cantidadDivisores; i++) {
      printf("%d, ", divisores[i]);
  }


  getPreviousNums(num, anteriores);

  printf("\nNumeros anteriores:\n");
  for (int j = 0; j < num - 1; j++) {
    printf("%d, ", anteriores[j]);
  }

  int tamano = sizeof(divisores) / sizeof(divisores[0]);

  if(esSumablePor(num, divisores, cantidadDivisores))
    printf("\n%d chi\n", num);
  else 
    printf("\n%d nu %d\n", num, divisores[0]);


  return 0;
}
