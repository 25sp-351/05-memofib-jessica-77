// memoize a fibonacci function
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "memoizefib.h"

int memo[MAX_FIB];

void init_memo() {
    for (int i = 0; i < MAX_FIB; i++) {
        memo[i] = -1;
    }
}

int fibby(int nth) {
    if(nth < 2) {
        return nth;
    }
    if (memo[nth] != -1) {
        return memo[nth];
    }
    memo[nth] = fibby(nth - 1) + fibby(nth - 2);
    return memo[nth];
}


