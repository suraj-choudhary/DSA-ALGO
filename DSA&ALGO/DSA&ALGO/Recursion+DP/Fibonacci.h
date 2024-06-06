//
//  Fibonacci.h
//  DSA&ALGO
//
//  Created by suraj kumar on 15/02/24.
//

#ifndef Fibonacci_h
#define Fibonacci_h

#include <stdio.h>

int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int f1 = fib(n - 1);
    int f2 = fib(n - 2);
    int fibn = f1 + f2;
    return fibn;
}

void printFibonacci(int n) {
    printf("First %d Fibonacci numbers: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
}

int mainqq() {
    printFibonacci(5);
    return 0;
}


#endif /* Fibonacci_h */
