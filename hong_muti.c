#include <stdio.h>

// 判断是否是16进制中的数字
#define is_hex_char(ch) \
'0' <= ch && '9' >= ch || \
'a' <= ch && 'f' >= ch || \
'A' <= ch && 'F' >= ch

int main() {

    printf("is hex ? %d\n", is_hex_char('0')); // 1
    printf("is hex ? %d\n", is_hex_char('5')); // 1
    printf("is hex ? %d\n", is_hex_char('9')); // 1
    printf("is hex ? %d\n", is_hex_char('a')); // 1
    printf("is hex ? %d\n", is_hex_char('d')); // 1
    printf("is hex ? %d\n", is_hex_char('f')); // 1
    printf("is hex ? %d\n", is_hex_char('g')); // 0
    printf("is hex ? %d\n", is_hex_char('A')); // 1
    printf("is hex ? %d\n", is_hex_char('D')); // 1
    printf("is hex ? %d\n", is_hex_char('F')); // 1
    printf("is hex ? %d\n", is_hex_char('G')); // 0

}