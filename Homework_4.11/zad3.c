#include <stdio.h>

#define PRINT(A) printf("The variable name is %s and its value is %d.\nThe file is %s and the line is %d\n", #A, A, __FILE__, __LINE__);

int main() {
    int a = 5;
    PRINT(a);
    return 0;
}
