#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)()

DEFINE_COMMAND(quit, internal) {
    printf("Internal quit command executed.\n");
}

DEFINE_COMMAND(quit, external) {
    printf("External quit command executed.\n");
}

int main() { 
    COMMAND(quit, external)(); 
    return 0;
}
