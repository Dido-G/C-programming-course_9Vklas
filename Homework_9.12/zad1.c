#include <stdio.h>
#include <limits.h>

#define PRINT_TYPE_INFO(type, signed_format, unsigned_format, max_signed, min_signed, max_unsigned) \
    printf("| %-12s | %-8s | %2lu bytes | %20lld | %20lld | %-10s | %20llu |\n", \
           #type, signed_format, sizeof(type), (long long)max_signed, (long long)min_signed, unsigned_format, (unsigned long long)max_unsigned)

int main() {
    printf("+--------------+----------+---------+----------------------+----------------------+------------+----------------------+\n");
    printf("| Type         | Format   | Size    | Max (signed)         | Min (signed)         | Unsigned   | Max (unsigned)       |\n");
    printf("+--------------+----------+---------+----------------------+----------------------+------------+----------------------+\n");

    PRINT_TYPE_INFO(char, "%c", "%hhu", CHAR_MAX, CHAR_MIN, UCHAR_MAX);
    PRINT_TYPE_INFO(short, "%hd", "%hu", SHRT_MAX, SHRT_MIN, USHRT_MAX);
    PRINT_TYPE_INFO(int, "%d", "%u", INT_MAX, INT_MIN, UINT_MAX);
    PRINT_TYPE_INFO(long, "%ld", "%lu", LONG_MAX, LONG_MIN, ULONG_MAX);
    PRINT_TYPE_INFO(long long, "%lld", "%llu", LLONG_MAX, LLONG_MIN, ULLONG_MAX);

    printf("+--------------+----------+---------+----------------------+----------------------+------------+----------------------+\n");

    return 0;
}
