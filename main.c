#include <stdio.h>
#include <stdlib.h>
#include "memoizefib.h"

int main(int argc, char *argv[]) {
    for(int i = 0; i < MAX_FIB; i++) {
        memo[i] = -1;
    }

    int target = atoi(argv[1]);
    int result = fibby(target);

    printf("the %dth fibonacci number is %d\n", target, result);
    return 0;
}
