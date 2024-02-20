//
//  Patterns.h
//  DSA&ALGO
//
//  Created by suraj kumar on 20/02/24.
//

#ifndef Patterns_h
#define Patterns_h
/*
 * * *
 * * *
 * * *
 */
void patternI(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

/*
 *
 * *
 * * *
 */

void patternII(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i >= j) {
                printf("*");
            }
         }
        printf("\n");
    }
}

/*
 1
 1 2
 1 2 3
 */

void patternIII(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i >= j) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}

/*
 1
 2 2
 3 3 3
 */
void patternIV(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i >= j) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}

/*
 * * *
 * *
 *
 */

void patternV(int n) {
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j >= i) {
                printf("*");
            }
        }
        printf("\n");
    }
}

/*
 1 2 3
 1 2
 1
 */

void patternVI(int n) {
    for(int i = 1; i <= n; i++) {
        
        for(int j = i; j <= n; j++) {
            if(j >= i) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}

void patternMain() {
    patternVI(3);
}


#endif /* Patterns_h */
