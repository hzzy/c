//
// Created by zy on 2023/12/16.
//

#include "stdio.h"
#include "limits.h"

int main() {

    printf("short int min: %hx, max: %hx\n", SHRT_MIN, SHRT_MAX);
    printf("int min: %d, max: %d\n", INT_MIN, INT_MAX);
    printf("long int min: %ld, max: %ld\n", LONG_MIN, LONG_MAX);
    printf("long long int min: %lld, max: %llo\n", LONG_LONG_MIN, LONG_LONG_MAX);

    printf("short int min: %d, max: %hx\n", 0, USHRT_MAX);
    printf("int min: %d, max: %u\n", 0, UINT_MAX);
    printf("long int min: %d, max: %lu\n", 0, ULONG_MAX);
    printf("long long int min: %d, max: %llx\n", 0, ULONG_LONG_MAX);

};