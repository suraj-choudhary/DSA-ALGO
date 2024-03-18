//
//  ParenthesisChecker.h
//  DSA&ALGO
//
//  Created by suraj kumar on 03/03/24.
//

#ifndef ParenthesisChecker_h
#define ParenthesisChecker_h

bool ispar(string x) {
    stack<char> temp;
    
    for(int i = 0; i < x.size(); i++) {
        if(temp.empty()) {
            temp.push(x[i]);
        } else if((temp.top() == '(' && x[i] == ')') || (temp.top() == '{' && x[i] == '}')
                  || (temp.top() == '[' && x[i] == ']')) {
            temp.pop();
        } else {
            temp.push(x[i]);
        }
    }
    if(temp.empty()) {
        printf("yes i am balances");
        return true;
    }
    return false;
}


bool isparIII(string exp) {
    
    stack<char>temp;
    
    for(int i = 0; i < exp.size(); i++) {
        if(temp.empty()) {
            temp.push(exp[i]);
        }
    }
    
    return true;
}


/// Description
/// - Parameter exp: exp description
bool isparII(string exp) {
    
    return true;
}

void isparMain() {
    string str = "{([])}";
    ispar(str);
}

#endif /* ParenthesisChecker_h */
