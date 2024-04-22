#include "practical.h"
#include <stdio.h>

int getDivisores(int num, int divisores[MAX_DIVISORES], int *cantidadDivisores){
  int count = 0;
  
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      divisores[count] = i;
      count++;
    }
  }

  *cantidadDivisores = count;
  return count;
}

int getPreviousNums(int num, int anteriores[]){
  for (int i = 1;i < num; i++) {
    anteriores[i - 1] = i;
  }
}
