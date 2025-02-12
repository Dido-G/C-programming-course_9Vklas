#include <stdio.h>
#include "transformation.h"

int main() {
    const char *input1 = "-123";
    const char *input2 = "12ab23";
    const char *input3 = "456";

    transformation result1 = string_to_int(input1);
    printf("Input: \"%s\"\nResult: %ld\nError: \"%s\"\n\n", input1, result1.result, result1.error);

    transformation result2 = string_to_int(input2);
    printf("Input: \"%s\"\nResult: %ld\nError: \"%s\"\n\n", input2, result2.result, result2.error);

    transformation result3 = string_to_int(input3);
    printf("Input: \"%s\"\nResult: %ld\nError: \"%s\"\n", input3, result3.result, result3.error);

    return 0;
}
