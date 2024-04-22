#include <stdio.h>

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
  int num;
  int array[] = {1,2,4,8};
  
  int tamano = sizeof(array) / sizeof(array[0]);

  printf("Introduzca un numero:\n");
  scanf("%d", &num);

  if(esSumablePor(num, array, tamano))
    printf("%d chi\n", num);
  else 
    printf("%d nu\n", num);

  return 0;
}
