//
//  isPalindrome.h
//  DSA&ALGO
//
//  Created by suraj kumar on 03/06/24.
//

#ifndef isPalindrome_h
#define isPalindrome_h

bool isPalindrome(int x) {
    int rev = 0;
    while (x != 0) {
        rev = 10 * rev + x % 10;
        x = x / 10;
    }
    printf("%d ", rev);
    return true;
}

void isPalindromeMain() {
    int number = 121;
    isPalindrome(number);
}

#endif /* isPalindrome_h */
