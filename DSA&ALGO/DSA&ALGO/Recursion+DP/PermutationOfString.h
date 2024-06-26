//
//  PermutationOfString.h
//  DSA&ALGO
//
//  Created by suraj kumar on 13/02/24.
//

#ifndef PermutationOfString_h
#define PermutationOfString_h

void perm(char S[], int k) {
    static char res[10] = {};
    static char flag[10] = {};
    if(S[k] == '\0') {
        printf("%s ", res);
    } else {
        for(int i = 0; S[i] != '\0'; i++) {
            if(flag[i] == 0) {
                res[k] = S[i];
                flag[i] = 1;
                perm(S, k + 1);
                flag[i] = 0;
            }
        }
    }
}



void permII(char str[], int k) {
    static char res[10] = {0};
    static int flag[10] = {0};
    if(str[k] == '\0') {
        printf("%s ", res);
    } else {
        for(int i = 0; str[i] != '\0'; i++) {
            if(flag[i] == 0) {
                res[k] = str[i];
                flag[i] = 1;
                permII(str, k + 1);
                flag[i] = 0;
            }
        }
    }
}



void permMain() {
    char S[] = "ABC";
    permII(S, 0);
}





#endif /* PermutationOfString_h */
