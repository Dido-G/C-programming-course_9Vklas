#include <stdio.h>

#define COMPARES(a, b) ((a) > (b) ? (a) : (b))


int main(){
  int a = 1;
  int b = 2;
  int result = COMPARES(a, b);
  printf("%d", result);
}