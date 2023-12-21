#include "stdio.h"

#define Max(a, b) (a) > (b)? (a) : (b)

int main() {

    int max = Max(1, Max(2, 3));
    printf("max %d\n", max);

}