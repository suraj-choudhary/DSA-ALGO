//
//  romanToInt.h
//  DSA&ALGO
//
//  Created by suraj kumar on 06/06/24.
//

#ifndef romanToInt_h
#define romanToInt_h
/*
 I             1
 V             5
 X             10
 L             50
 C             100
 D             500
 M             1000
 */
int value(char r) {
    if(r == 'I') {
        return 1;
    }
    if(r == 'V') {
        return 5;
    }
    if(r == 'X') {
        return 10;
    }
    if(r == 'X') {
        return 50;
    }
    if(r == 'X') {
        return 100;
    }
    if(r == 'X') {
        return 500;
    }
    if(r == 'X') {
        return 1000;
    }
    return -1;
}
int romanToInt(string str) {
    for(int i = 0; i < str.size(); i++) {
        int s1 = value(str[i]);
        if(i + 1 < str.size()) {
            
        }
        printf("%d ", s1);
    }
    return 0;
}

void romanToIntMain() {
    string str = "III";
    romanToInt(str);
}

#endif /* romanToInt_h */
