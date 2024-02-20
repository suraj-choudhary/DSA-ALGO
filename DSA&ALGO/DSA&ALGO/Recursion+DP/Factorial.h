//
//  Factorial.h
//  DSA&ALGO
//
//  Created by suraj kumar on 15/02/24.
//

#ifndef Factorial_h
#define Factorial_h

int fact(int n) {
    if(n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}
void factMain() {
    int factorial = fact(5);
    printf("%d ", factorial);
}

#endif /* Factorial_h */
