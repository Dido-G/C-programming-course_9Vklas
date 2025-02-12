#include <stdio.h>
#include <string.h>
#include "transformation.h"

transformation string_to_int(const char *str) {
    transformation result = {0, ""};
    if (str == NULL || *str == '\0') {
        snprintf(result.error, sizeof(result.error), "Invalid input string");
        return result;
    }

    int i = 0, sign = 1;

    
    if (str[i] == '-' || str[i] == '+') {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }

    // Преобразуване на символния низ в число
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            snprintf(result.error, sizeof(result.error), "Invalid input string");
            return result;
        }
        result.result = result.result * 10 + (str[i] - '0');
        i++;
    }

    result.result *= sign; // Прилагане на знака
    return result;
}
