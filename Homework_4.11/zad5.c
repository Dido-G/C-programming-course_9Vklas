  #include <stdio.h>

  #define SWAP(A, B, TYPE) TYPE temp = A; \
                            A = B;    \
                            B = temp;

  int main() {
      int a = 1;
      int b = 5;
      SWAP(a, b, int);
      printf("a = %d, b = %d\n", a, b);
      return 0;
  }
