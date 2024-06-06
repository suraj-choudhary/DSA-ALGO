//
//  permuationOfParanthesis.h
//  DSA&ALGO
//
//  Created by suraj kumar on 01/04/24.
//

#ifndef permuationOfParanthesis_h
#define permuationOfParanthesis_h

using namespace std;
void genrateBalParanthesis(string output, int n, int open, int close, int i) {
    //base case
    
    if(i == 2 * n) {
        cout<<output<<endl;
        return;
    }
    // open bracket
    
    
    if(open < n) {
        genrateBalParanthesis(output + "(", n, open + 1, close, i + 1);
    }
    if(close < open) {
        genrateBalParanthesis(output + ")", n, open, close + 1, i + 1);

    }
}

void genrateBalParanMain() {
    string output;
    int n = 2;
    genrateBalParanthesis(output, n, 0, 0, 0);
}

#endif /* permuationOfParanthesis_h */
