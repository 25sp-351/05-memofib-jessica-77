#ifndef MEMOIZEFIB_H
#define MEMOIZEFIB_H

#define MAX_FIB 100

extern int memo[MAX_FIB];

void init_memo();
int fibby(int n);

#endif