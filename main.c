#include <stdio.h>
#include <stdlib.h>
#include "memoizefib.h"

int main(int argc, char *argv[]) {
    for(int i = 0; i < MAX_FIB; i++) {
        memo[i] = -1;
    }
    if (argc != 2) {
        printf("Usage: %s <target>\n", argv[0]);
        return 1;
    }
    if(atoi(argv[1]) < 0) {
        printf("Please enter a positive number\n");
        return 1;
    }
    
    int target = atoi(argv[1]);
    int result = fibby(target);

    printf("the %dth fibonacci number is %d\n", target, result);
    return 0;
}
