#include "safeint.h"
#include <limits.h>
#include <stdlib.h>

SafeResult safeadd(int a, int b) {
    SafeResult result;
    long long sum = (long long)a + b;

    if (sum > INT_MAX || sum < INT_MIN) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.value = (int)sum;
        result.errorflag = 0;
    }

    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result;
    long long difference = (long long)a - b;

    if (difference > INT_MAX || difference < INT_MIN) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.value = (int)difference;
        result.errorflag = 0;
    }

    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result;
    long long product = (long long)a * b;

    if (product > INT_MAX || product < INT_MIN) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.value = (int)product;
        result.errorflag = 0;
    }

    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result;

    if (b == 0) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.value = a / b;
        result.errorflag = 0;
    }

    return result;
}

SafeResult safestrtoint(const char* str) {
    SafeResult result;
    char *endptr;
    long long num = strtol(str, &endptr, 10);

    if (*endptr != '\0') {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }

    SafeResult conversion_check;
    conversion_check = safeadd(0, (int)num);

    if (conversion_check.errorflag) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.value = conversion_check.value;
        result.errorflag = 0;
    }

    return result;
}
