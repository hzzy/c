#include <stdio.h>


void log(char *info) {
#ifdef DEBUG
    printf("log info:%s\n", info);
#endif
}

int main() {
    log("this is start...");
    printf("this is main method!!\n");
    log("this is end...");
}