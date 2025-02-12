#include <stdio.h>
#include "quadraticroots.h"

void printRoots(QuadraticRootsResult result) {
    if (result.norealroots) {
        printf("No real roots.\n");
    } else {
        printf("The roots of the equation are: x1 = %.5Lf, x2 = %.5Lf\n", result.x1, result.x2);
    }
}
int main(){
    int a = 4;
    int b = 20;
    int c = 25;
    QuadraticRootsResult result_int = findroots(a, b, c);
    printRoots(result_int);

}