#include <stdio.h>

int main() {
    int a = 12, b = 18;
    int nok = 0;

    int max = (a > b) ? a : b;

    for (int i = max; ; i += max) {
        if (i % a == 0 && i % b == 0) {
            nok = i;
            break;  
            }
    }

    
    printf("Least common multiple на %d и %d е: %d\n", a, b, nok);

    return 0;
}
